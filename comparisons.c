#include<stdio.h>
int arr[1000],n,i,j,k,temp,count=0,c=0,index1;

		
		
		void bubblesort(int arr[],int n)
		{
			
			for(i=0;i<n;i++)
			{
				for(j=0;j<n-i-1;j++)
				{
					if(arr[j]>arr[j+1])
					{
						temp=arr[j];
						arr[j]=arr[j+1];
						arr[j+1]=temp;
						count++;
					}
				}
			
			}
			printf("Bubble sort\n");
			for(i=0;i<n;i++)
			{
			printf("%d\t",arr[i]);
			printf("\n");
			}
			
			printf("No of comparisions: %d",count);
		}
		
		
		void selectionsort(int arr[],int n)
		{
			for(i=0;i<k;i++)
			{
				index1=i;
				for(j=i+1;j<n;j++)
				{
					if(arr[j]<arr[index1])
					{
						index1=j;
						c++;
					}
				}
				temp=arr[i];
				arr[i]=arr[index1];
				arr[index1]=temp;
			}
			printf("Selection sort");
			for(i=0;i<n;i++)
			{
			printf("%d\t",arr[i]);
			printf("\n");
			}
			printf("No of comparisions: %d",c);
		}
		

		
void main()
{
	
		printf("Enter the number of elements:");
		scanf("%d",&n);
		printf("Enter the elements:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		bubblesort(arr,n);
		bubblesort(arr,n);
}