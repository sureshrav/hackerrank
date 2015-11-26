#include<iostream>
#include<string.h>
using namespace std;
#include<limits.h>
int mat[2000][2000];


int main()
{
	int t,n,m,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
	
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>mat[i][j];
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=m-2;j>=0;j--)
			{
				mat[i][j]+=mat[i][j+1];
			}
		}
		for(j=0;j<m;j++)
		{
			for(i=n-2;i>=0;i--)
			{
				mat[i][j]+=mat[i+1][j];
			}
		}
		int max=INT_MAIN;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(mat[i][j]>max)
				{
					max=mat[i][j];
				}
			}
			
		}
		cout<<max<<endl;
	}
}
