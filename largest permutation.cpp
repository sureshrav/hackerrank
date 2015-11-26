#include<iostream>
using namespace std;
int main()
{
	long long int n,k,i,j,ans,m,l,s;
	cin>>n>>k;
	long long int a[n];
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		m=a[i];
		l=i;
		s=0;
		for(j=i+1;j<n;j++)
		{
			if((a[j]>m))
			{
				m=a[j];
				l=j;
				s=1;
			}
		}
		if(k!=0&&s==1)
		{
			k--;
			ans=a[i];
			a[i]=a[l];
			a[l]=ans;
		}
		if(k==0)
		{
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
	
}
