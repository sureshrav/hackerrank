#include<iostream>
using namespace std;
#include<string.h>
long long int t,n,i,j;
string s;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>s;
		n=s.length();
		long long int dp[n][n];
		memset(dp,0,sizeof(dp));
		for(i=n-1;i>=0;i--)
		{
			int c=1;
			dp[i][i]=1;
			if(i+1!=n)
			{
				if(s[i]==s[i+1])
				{
					c++;
					dp[i][i+1]=3;
				}
				else
				{
					dp[i][i+1]=2;
				}
			}
			for(j=i+2;j<n;j++)
			{
				if(s[i]==s[j])
				{
					c++;
					c+=dp[i+1][j-1];
				}
				dp[i][j]=c+dp[i+1][j];
			}
		}
		cout<<dp[0][n-1]<<endl;
	}
}
