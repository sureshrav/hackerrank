#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a[600][600],i,j,n,m,sub=0,te=0,x=0,k,l;
	cin>>n>>m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%1d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			x=0;
			for(k=0;k<m;k++)
			{
				if((a[i][k]+a[j][k])>0)
				{
					x++;
				}
			}
			if(x>sub)
			{
				sub=x;
				te=1;
			}
			else if(x==sub)
			{
				te++;
			}
		}
	}
	cout<<sub<<endl<<te;
	return 0;
}
