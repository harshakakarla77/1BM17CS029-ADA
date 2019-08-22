#include<stdio.h>
void main()
{
	int arr[1000],n,i,j,k,temp;
		printf("Enter the number of elements:");
		scanf("%d",&n);
		printf("Enter the elements:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Enter k:");
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			for(j=0;j<n-i-1;j++)
			{
				if(arr[j]>arr[j+1])
				{
					temp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=temp;
				}
			}
			printf("%d\t",arr[j]);
		}
		
		
}