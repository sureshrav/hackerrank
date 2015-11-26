#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
#include<set>
#include<limits.h>
using namespace std;
typedef long long int ll;
map<ll,ll>v;
map<ll,set<ll> >mp;
ll l,r,i,k,s=INT_MAX;
void dfs(ll next,ll prev)
{
	set<ll>::iterator it;
	l+=v[next];
	for(it=mp[next].begin();it!=mp[next].end();it++)
	{
		if((*it)==prev)
		{
			continue;
		}
		dfs(*it,next);
		
	}
}
int main()
{
	long long int n;
	cin>>n;
	
	for(i=1;i<=n;i++)
	{
		cin>>k;
		v[i]=k;
	}
	ll x[n-1],y[n-1];
	for(i=0;i<n-1;i++)
	{
		cin>>x[i]>>y[i];
		mp[x[i]].insert(y[i]);
		mp[y[i]].insert(x[i]);
	}
	for(i=0;i<n-1;i++)
	{
		l=0;
		dfs(x[i],y[i]);
		r=l;
		l=0;
		dfs(y[i],x[i]);
		k=l-r;
		if(k<0)
		{
			k*=-1;
		}
		s=min(s,k);
		
	}
	cout<<s;
	return 0;

}
