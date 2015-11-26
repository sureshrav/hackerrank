#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<queue>
using namespace std;
typedef pair<long long int,long long int> node;
map<long long int,map<long long int,long long int> >mp;
long long int cost=0,n,m,i,x,y,r,s;
struct comp
{
	int operator()(const node &a,const node &b)
	{
		return a.second>b.second;
	}
};
int main()
{
	cin>>n>>m;
	for(i=0;i<m;i++)
	{
		cin>>x>>y>>r;
		if(mp[x].find(y)==mp[x].end())
		{
			mp[x][y]=r;
		}
		else
		{
			mp[x][y]=min(r,mp[x][y]);
		}
		if(mp[y].find(x)==mp[y].end())
		{
			mp[y][x]=r;
		}
		else
		{
			mp[y][x]=min(r,mp[y][x]);
		}
	}
	priority_queue<node,vector<node>,comp> hp;
	vector<bool> v;
	v.assign(n+5,false);
	
	cin>>s;
	hp.push(node(s,0));

	while(!hp.empty())
	{
		node p=hp.top();
		hp.pop();
		if(!v[p.first])
		{
		v[p.first]=true;
		cost+=p.second;
		map<long long int,long long int>::iterator it;
		for(it=mp[p.first].begin();it!=mp[p.first].end();++it)
		{
			if(!v[(*it).first])
			{
			
				hp.push(node((*it).first,(*it).second));
			
			}
		}
		
		}
	}
	cout<<cost<<endl;
	return 0;
}
