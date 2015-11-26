#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
typedef long long int  ll;
ll n,d,i;
int main()
{
	cin>>n>>d;
	vector<ll>v(n);
	for(i=0;i<n;i++)
	{
		cin>>v[i];
		
	}
	vector<ll>::iterator it;
	ll c=0;
	for(i=0;i<n;i++)
	{
		it=find(v.begin(),v.end(),v[i]+d);
		if(it!=v.end())
		{
			c++;
		}
	}
	cout<<c<<endl;
	return 0;
}
