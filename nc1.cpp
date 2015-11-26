#include<iostream>
using namespace std;
long long int t,m,n;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		if(m==0&&n!=1)
		{
			cout<<"No 1"<<endl;
			continue;
		}
		if(m==0&&n==1)
		{
			cout<<"Yes"<<endl;
			continue;
		}
		
		if(n%2)
		{
			cout<<"Yes";
		}
		else
		{
			if((n/2)==m&&n!=2)
			{
				cout<<"No 2";
			}
			else if(m%2)
			{
				cout<<"Yes";
			}
			else
			{
				cout<<"No "<<n/2;
			}
		}
		cout<<endl;
	}
	return 0;
}
