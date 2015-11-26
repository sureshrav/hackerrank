#include<iostream>
#include<algorithm>
using namespace std;
long long int dp[100005],ps[100005],a[100005],i,n,x,y,z,t,m;

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n; 
		for(i=n-1;i>=0;i--)
		{
			cin>>a[i];
		}
		ps[0]=a[0];
		ps[1]=a[1]+ps[0];
		ps[2]=a[2]+ps[1];
		for(i=3;i<n;i++)
		{
			ps[i]=ps[i-1]+a[i];
		}
		dp[0]=a[0];
		dp[1]=a[1]+dp[0];
		dp[2]=a[2]+dp[1];
		for(i=3;i<n;i++)
		{
			x=a[i]+ps[i-1]-dp[i-1];
			y=a[i]+a[i-1]+ps[i-2]-dp[i-2];
			z=a[i]+a[i-1]+a[i-2]+ps[i-3]-dp[i-3];
			m=max(x,y);
			m=max(m,z);
			dp[i]=m;
		}
		for(i=0;i<n;i++)
		{
			cout<<ps[i]<<" "<<dp[i]<<endl;
		}
		cout<<dp[n-1]<<endl;
	}
}
