#include<map>
#include<algorithm>
#include<iostream>
using namespace std;
typedef long long int ll;
ll n,d,i,k,c=0;
int main()
{
	map<ll,ll> mp;
	cin>>n>>d;
	for(i=0;i<n;i++)
	{
		cin>>k;
		if(mp[k]==0)
		{
			mp[k-d]+=1;
			mp[k+d]+=2;
			continue;
		}
		if(mp[k]==3)
		{
			c+=2;
		}
		else
		{
			c++;
		}
		if(mp[k]==1)
		{
			mp[k-d]+=1;
		}
		else if(mp[k]==2)
		{
			mp[k+d]+=2;
		}
	}
	cout<<c<<endl;
	return 0;
}
