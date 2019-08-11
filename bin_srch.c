#include<stdio.h>
void main()
{
int beg,mid,end,i,n,flag=0,arr[100],ele;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
	scanf("%d",&arr[i]);
	}
printf("Enter the search element:");
scanf("%d",&ele);
beg=0,end=n-1;
	while(beg<=end)
	{
	mid=(beg+end)/2;
	if(arr[mid]==ele)
	{
	flag=1;
	break;
	}
	else if(arr[mid]<ele)
	{
	beg=mid+1;
	}
	else
	end=mid-1;
	}
if(flag==1)
{
printf("The element is found at position %d",mid+1);
printf("\n");
}
else
printf("Element not found in the given array!!");
printf("\n");
}


