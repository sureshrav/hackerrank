#include<iostream>
#include<bitset>
#include<vector>
#include<string.h>
using namespace std;

bool solve(string x,string y,int n)
{
	int last=0,i;
	bitset<200> b;
	vector<bool> dp(2*n,false);
	for(i=0;i<n;i++)
	{
		b[i*2]=x[i]-'0';
		if(!b[i*2])
		{
			last=i*2;
		}
		b[i*2+1]=y[i]-'0';
		if(!b[i*2+1])
		{
			last=i*2+1;
		}
	}
	for(i=0;i<2*n;i++)
	{
		if(b[i])
		{
			dp[i]=( (i==0) ? true :dp[i-1]);
			continue;
		}
		bool prev= ((i==0)?true:(dp[i-1]));
		if(!prev)
		{
		
			continue;
		}
		bool next=false,nnext=false;
		if(i<(2*n-1))
		{
			next=b[i+1];
			if(!next)
			{
				dp[i+1]=true;
			}
		}
		if(i<(2*n-2))
		{
			nnext=b[i+2];
			if(next&&(!nnext))
			{
				dp[i+2]=true;
			}
		}
		
	}
	return dp[last];
}
int main()
{
	string x,y;
int i,b,t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		cin>>x>>y;
		bool r=solve(x,y,n);
		if(r)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
		
	}
	return 0;
}
