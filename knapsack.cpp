#include<bits/stdc++.h>
using namespace std; 

int knapSack(int W, int wt[], int val[], int n) 
{ 
   int i, w; 
   int K[n+1][W+1]; 
  
 
   for (i = 0; i <= n; i++) 
   { 
       for (w = 0; w <= W; w++) 
       { 
           if (i==0 || w==0) 
               K[i][w] = 0; 
           else if (wt[i-1] <= w) 
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]); 
           else
                 K[i][w] = K[i-1][w]; 
       } 
   } 
  
   return K[n][W]; 
} 
  
int main() 
{ 
    int W,val[100],wt[100],n;
	cout<<"Enter the sack capacity";
	cin>>W;
	cout<<"Enter the number of values:";
	cin>>n;
	cout<<"Enter the weights:";
	for(int i=0;i<n;i++)
	{
		cin>>wt[i];
	}
	
	cout<<"Enter the values";
	for(int i=0;i<n;i++)
	{
		cin>>val[i];
	}
     printf("%d", knapSack(W, wt, val, n)); 
    return 0; 
} 