#include<iostream>
#include<limits.h>
using namespace std;


int main()
{
	int t;
	long long int i,j,n,k,x,p,y,q;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		p=0;
		q=0;
		for(i=n-1;i>=0;i--)
		{
			if(p<a[i])
			{
				p=a[i];
			}
			q+=(p-a[i]);
		}
		cout<<q<<endl;
		
	
	}
	
}
