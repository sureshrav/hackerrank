#include<iostream>
using namespace std;
#include<algorithm>
long long int i,n,t,ct,c,x;
long long int a[1000055];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		
		for(i=0;i<n;i++)
		{
			cin>>a[i];
			
		}
		sort(a,a+n);
		long long int ct=n;
		x=a[0];
		c=0;
		for(i=1;i<n;i++)
		{
			if(a[i]==x)
			{	
					c++;
			}
			else
			{
				ct+=((c*(c+1))/2);
				c=0;
				x=a[i];
			}
		}
		ct+=((c*(c+1))/2);
		cout<<ct<<endl;
	}	
}
