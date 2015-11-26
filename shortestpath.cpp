#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <queue>
#include <map>
#include <set>
using namespace std;

#define M -1
vector<long>dist;
int i,j,s,n,m,d,e;
struct cmp
{
	int operator()(const int &v,const int &l)
	{
		return dist[v]>dist[l];
	}
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		map<int,set<int> >mp;
		for(i=0;i<m;i++)
		{
			cin>>d>>e;
			mp[d-1].insert(e-1);
			mp[e-1].insert(d-1);
			
		}
		cin>>s;
		dist.assign(n,M);
		dist[s-1]=0;
		
		priority_queue<int,vector<int>,cmp>p;
		p.push(s-1);
		while(!p.empty())
		{
			int j=p.top();
			p.pop();
			set<int>::iterator it;
			for(it=mp[j].begin();it!=mp[j].end();++it)
			{
				int c=*it;
				if(dist[c]==M||(dist[j]+1)<dist[c])
				{
					dist[c]=dist[j]+1;
					p.push(c);
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if((i+1)!=s)
			{
				(dist[i]==M)?cout<<"-1":cout<<dist[i]*6;
				cout<<" ";
			
			}
		}
		cout<<endl;
	}
	return 0;
}
