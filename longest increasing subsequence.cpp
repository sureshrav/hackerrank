#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	long long int n,i,j,k,l,c;
	cin>>n;
	long long int x[n],*y;
	y=new long long int[n];
	for(i=0;i<n;i++)
	{
		cin>>x[i];
	}
	
	for(i=0;i<n;i++)
	{
		y[i]=1;
	}
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(x[i]>x[j]&&y[i]<y[j]+1)
			{
				y[i]=y[j]+1;
			}
		}
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<y[i])
		{
			max=y[i];
		}
	}
	cout<<max<<endl;
	return 0;
	
	
	
}
