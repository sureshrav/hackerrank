#include<iostream>
#include<map>
#include<limits.h>
#include<set>
#include<algorithm>
using namespace std;
typedef long long int ll;
map<ll,set<ll> >mp;
map<ll,ll>val;
ll vis[100005]={0},sum[100005]={0};
ll tot=0,i,n,k,x,y;
ll dfs(ll m)
{
	vis[m]=1;
	int ret=0;
	set<ll>::iterator it;
	for(it=mp[m].begin();it!=mp[m].end();it++)
	{
		if(!vis[(*it)])
		{
			ret+=dfs((*it));
		}
	}
	return sum[m]=val[m]+ret;
}
int main()
{
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>k;
		tot+=k;
		val[i]=k;
	}
	for(i=0;i<n-1;i++)
	{
		cin>>x>>y;
		mp[x].insert(y);
		mp[y].insert(x);
	}
	dfs(1);
	ll best=INT_MAX;
	for(i=1;i<=n;i++)
	{
		if(abs(tot-(2*sum[i]))<best)
		{
			best=abs(tot-(2*sum[i]));
		}
	}
	cout<<best<<endl;
	return 0;
}
