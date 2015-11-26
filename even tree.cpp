#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	int n,m,c,p,t,i;
	cin>>n>>m;
	int root[n+1],cost[n+1];
	memset(root,0,sizeof(root));
	memset(cost,1,sizeof(cost));
	while(m--)
	{
		cin>>c>>p;
		root[c]=p;
		cost[p]+=cost[c];
		t=root[p];
		while(t!=0)
		{
			cost[t]+=cost[c];
			t=root[t];
		}
	}
	int counter=-1;
	for(i=0;i<n;i++)
	{
		if(cost[i]%2==0)
		{
			counter++;
		}
	}
	cout<<counter;
}
