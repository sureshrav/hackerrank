#include<iostream>
#include<vector>
#include<queue>
#include<map>
#include<algorithm>
#define inf 999999999
using namespace std;
typedef long long int ll;
typedef pair<long,long> node;
int n,m,s,d,r,i,c,sum;
int main()
{
	cin>>n>>m;
	vector<vector<node> >edge(n);
	for(i=0;i<m;i++)
	{
		cin>>s>>d>>c;
		s--;
		d--;
		edge[s].push_back(node(c,d));
		edge[d].push_back(node(c,s));
	}
	cin>>r;
	vector<bool>visi(n,false);
	vector<ll>dist(n,inf);
	priority_queue<node,vector<node>,greater<node> > hp;
	visi[0]=true;
	dist[0]=0;
	hp.push(node(0,0));
	while(!hp.empty())
	{
		node p=hp.top();
		hp.pop();
		vector<node>::iterator it;
		for(it=edge[p.second].begin();it!=edge[p.second].end();it++)
		{
			if(dist[it->second]>it->first&&!visi[it->second])
			{
				visi[it->second]=true;
				dist[it->second]=it->first;
				hp.push(node(dist[it->second],it->second));
			}
		}
	}
	sum=0;
	for(i=0;i<n;i++)
	{
	//	cout<<dist[i];
		sum+=dist[i];
		
	}
	cout<<sum;
	return 0;
}
