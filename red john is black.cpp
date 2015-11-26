#include<iostream>
#include<string.h>
using namespace std;
#define max 6000000
long long int dp[100],prm[max],pc[max],n,t,i,j,k;

void solve()
{
	
	dp[0]=dp[1]=dp[2]=dp[3]=1;
	for(i=4;i<=n;i++)
	{
		dp[i]=dp[i-1]+dp[i-4];
	}
}
void seive()
{
	memset(prm,1,sizeof(prm));
	prm[0]=prm[1]=pc[0]=pc[1]=0;
	int c=0;
	for(i=2;i<=max;i++)
	{
		if(prm[i])
		{
			++c;
			pc[i]=c;
			for(j=2*i;j<=max;j=j+i)
			{
				prm[j]=0;
			}	
		}
		else
		{
			pc[i]=c;
		}
	}
}
int main()
{
	seive();
	cin>>t;
	while(t--)
	{
	
	cin>>n;
	solve();
	k=dp[n];
	cout<<pc[k]<<endl;
	}
	return 0;
	
}
