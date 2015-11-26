#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	long long int n,i,k,c;
	string s;
	cin>>s;
	n=s.length();
	long long int dp[4000][4000]={0};
	
	for(i=0;i<n;i++)
	{
		dp[i][i]=1;
	}
	for(k=2;k<=n;k++)
	{
		for(i=0;i<n-k+1;i++)
		{
			c=i+k-1;
			if(s[i]==s[c]&&k==2)
			{
				dp[i][c]=2;
				
			}
			else if(s[i]==s[c])
			{
				dp[i][c]=dp[i+1][c-1]+2;
			}
			else
			{
				dp[i][c]=max(dp[i+1][c],dp[i][c-1]);
				dp[i][c]=max(dp[i][c],dp[i+1][c-1]);
			}
		}
	}
	long long int b=1;
	for(i=0;i<n-1;i++)
	{
		if((dp[0][i]*dp[i+1][n-1])>b)
		{
			b=(dp[0][i]*dp[i+1][n-1]);
		}
	}
	cout<<b<<endl;
	
}
