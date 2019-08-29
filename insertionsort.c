#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,j,temp,arr[100],n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=temp;
	}
	printf("The sorted array is:\n");
	for(i=0;i<n;i++)
	printf("%d\n",arr[i]);
}
			
			