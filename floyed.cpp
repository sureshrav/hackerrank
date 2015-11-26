#include<iostream>
#include<limits.h>
using namespace std;

#include<string.h>

int main()
{
	long long int max=INT_MAX;
	long long int n,m,x,y,r,i,k,j;
	cin>>n>>m;
	long long int dist[n][n];

		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				dist[i][j]=max;
			}
			
		}
	while(m--)
	{
		cin>>x>>y>>r;
		dist[x-1][y-1]=r;
	}
	for(i=0;i<n;i++)
	{
		dist[i][i]=0;
	}

	for(k=0;k<n;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==j)
				{
					continue;
				}
				if(dist[i][k]!=max&&dist[k][j]!=max)
				{
					if(dist[i][j]>(dist[i][k]+dist[k][j]))
					{
						dist[i][j]=(dist[i][k]+dist[k][j]);
					}
				}
			}
		}
	}
	

		cin>>m;
		while(m--)
		{
			
		
			cin>>x>>y;
			x--;
			y--;
			if(dist[x][y]==max)
			{
				cout<<-1;
			}
			else
			{
				cout<<dist[x][y];
			}
			cout<<endl;
		}

	
	return 0;
}
