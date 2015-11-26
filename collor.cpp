#include<iostream>
using namespace std;
int main()
{
	int t,n,x,y,k,i;
	cin>>t;
	while(t--)
	{
		cin>>n>>x>>y;
		int c=0;
		cin>>k;
		if(k==x)
		{
			c+=1;
		}
		for(i=1;i<=(n-2);i++)
		{
			cin>>k;
		}
		cin>>k;
		if(k==y)
		{
			c+=2;
		}
		if(c==3)
		{
			cout<<"BOTH";
		}
		else if(c==1)
		{
			cout<<"EASY";
		}
		else if(c==2)
		{
			cout<<"HARD";
		}
		else
		{
			cout<<"OKAY";
		}
		cout<<endl;
	}
}
