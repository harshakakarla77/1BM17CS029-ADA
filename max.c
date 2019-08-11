#include<stdio.h>
void main()
{
int arr[100],n,max;
printf("Enter the number of elements in the array:");
scanf("%d",&n);
printf("Enter the array elements:");
for(int i=0;i<n;i++)
scanf("%d",&arr[i]);
max=arr[0];
for(int i=0;i<n;i++)
{
if(arr[i]>max)
max=arr[i];
}
printf("The largest element in the array is: %d",max);
}
