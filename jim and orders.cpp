#include<iostream>
using namespace std;
#include<algorithm>
struct order
{
	long long int t,d,x,b;
};
int comp(struct order a,struct order c)
{
	if(a.x<c.x)
	{
		return 1;
	}
	else if (a.x==c.x)
	{
		if(a.b<c.b)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
}
int main()
{
	long long int n,i,j,k;
	cin>>n;
	struct order a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i].t>>a[i].d;
		a[i].x=a[i].t+a[i].d;
		a[i].b=i+1;
	}
	sort(a,a+n,comp);
	for(i=0;i<n;i++)
	{
		cout<<a[i].b<<" ";
	}
	return 0;
}
