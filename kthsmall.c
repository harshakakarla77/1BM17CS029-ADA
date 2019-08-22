#include<stdio.h>
	void main()
	{
		int arr[1000],n,i,j,k,temp,index;
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
			index=i;
			for(j=i+1;j<n;j++)
			{
				if(arr[j]<arr[index])
				{
					index=j;
				}
			}
			temp=arr[i];
			arr[i]=arr[index];
			arr[index]=temp;
		}
		printf("The %d smallest no is %d",k,arr[k-1]);
	}
