#include<bits/stdc++.h>
using namespace std;
#define n 5
int a[n][n];
void floyds(int a[n][n])
{
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}
	cout<<"\n";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}

int main()
{
	cout<<"Enter the adjacency matrix:";
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	floyds(a);
	return 0;
}