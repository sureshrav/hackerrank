#include<iostream>
#include<string.h>
using namespace std;
int dp[100005],r[100005]={0},l[100005]={0},t,i,n;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		memset(r,0,sizeof(r));
		memset(l,0,sizeof(l));
		for(i=1;i<=n;i++)
		{
			cin>>dp[i];
		}
		for(i=1;i<=n;i++)
		{
			r[i]=r[i-1]+dp[i];
		}
		for(i=n;i>=1;i--)
		{
			l[i]=l[i+1]+dp[i];
		}
		int f=0;
		for(i=1;i<=n;i++)
		{
			if(r[i-1]==l[i+1])
			{
				f=1;
				break;
			}
		}
		if(f)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
}
