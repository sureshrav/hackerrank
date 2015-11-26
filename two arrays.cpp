#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int n,k,i,j,x,t;
	cin>>t;
	while(t--)
	{
	x=0;
	cin>>n>>k;
	long long int a[n],b[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n);
	for(i=0;i<n;i++)
	{
		if((a[i]+b[n-1-i])<k)
		{
			x=1;
			break;
		}
	}
	if(x==0)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	}
}
