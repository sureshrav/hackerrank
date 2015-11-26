#include<iostream>
using namespace std;
#include<stdio.h>
#include<algorithm>
#include<set>
#include<map>
#include<limits.h>
#include<vector>
#include <queue>
vector<long>dist;
map<int ,map<int ,int > >mp;
int  s, p, x,y,n,m,t,i,d,r;
typedef pair<int,long > node;
struct comp
{
	int operator() (const node &x,const node &y)
	{
		return x.second>y.second;
	}
};

int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		mp.clear();
		for(i=0;i<m;i++)
		{
			cin>>s>>d>>r;
			s--;
			d--;
			if(mp[s].find(d)==mp[s].end())
			{
				mp[s][d]=r;
			}
			else
			{
				mp[s][d]=min(mp[s][d],r);
			}
			if(mp[d].find(s)==mp[d].end())
			{
				mp[d][s]=r;
			}
			else
			{
				mp[d][s]=min(mp[d][s],r);
			}
		}
		cin>>s;
		s--;
		priority_queue<node,vector<node>,comp> hp;
		dist.assign(n,INT_MAX);
		dist[s]=0;
	
		hp.push(node(s,dist[s]));
		while(!hp.empty())
		{
			node p=hp.top();
			hp.pop();
			map<int,int>::iterator it;
			x=p.first;
			
			for(it=mp[x].begin();it!=mp[x].end();it++)
			{
			
				if(dist[(*it).first]==INT_MAX||(dist[x]+(*it).second)<dist[(*it).first])
				{
					dist[(*it).first]=dist[x]+(*it).second;
					hp.push(node((*it).first,dist[(*it).first]));
				}
			}
		}
		for(i=0;i<n;i++)
		{
			if(i!=s)
			{
				cout<<((dist[i]==INT_MAX)?-1:dist[i]);
				cout<<" ";
			}
		}
		cout<<endl;
	}
}

