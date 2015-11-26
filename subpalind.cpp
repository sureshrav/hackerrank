#include<iostream>
#include<string.h>
using namespace std;
long long int t,i,j,k,n;
int main()
{
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		n=s.length();
		long long int dp[n][n];
		memset(dp,0,sizeof(dp));
		for(i=0;i<n;i++)
		{
			dp[i][i]=1;
		}
		for(i=0;i<n-1;i++)
		{
			if(s[i]==s[i+1])
			{
				dp[i][i+1]=1;
			}
		}
		
		//g(i, j) = g(i+1, j) + g(i, j-1) - g(i+1, j-1) + (x[i] == x[j])*(g(i+1, j-1) - g(i+2, j-1) - g(i+1, j-2) + g(i+2, j-2))
		for(k=3;k<=n;k++)
		{
			for(i=0;i<n-k+1;i++)
			{
				j=i+k-1;
				dp[i][j]=dp[i+1][j]+dp[i][j-1]-dp[i+1][j-1]+(s[i]==s[j])*(dp[i+1][j-1]-dp[i+2][j-1]-dp[i+1][j-2]+dp[i+2][j-2]);
				
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<dp[0][n-1]<<endl;
	}
	return 0;
}
