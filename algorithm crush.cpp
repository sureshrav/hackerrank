#include<iostream>
#include<algorithm>
using namespace std;
struct pt
{
	long long int x,y,v;
};
int comp(struct pt a ,struct pt b)
{
	if(a.x<=b.x)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	long long int n,m,i,j,k,max;
	cin>>n>>m;
	struct pt a[m];
	for(i=0;i<m;i++)
	{
		cin>>a[i].x>>a[i].y>>a[i].v;
	}
	sort(a,a+n,comp);
	max=0;
	m=a[0].v;
	j=1;
	for(i=0;i<m-1;i++)
	{
		for(;a[j].x<=a[i].y&&j<m;j++)
		{
			m+=a[j].v;
		}
		if(max<m)
		{
			max=m;
		}
		if(j==m)
		{
			break;
		}
		m=m-a[i].v;
	}
	cout<<max<<endl;
	return 0;
}
