#include<iostream>
using namespace std;
int main()
{
	long long int a,b,c,x,y,ans;
	cin>>x>>y;
	if(x%2==0)
	{
		x=x/2;
		ans=1+(x-1)*10;
		
	}
	else
	{
		x=(x+1)/2;
		ans=0+(x-1)*10;
	}
	ans+=(y-1)*2;
	cout<<ans<<endl;
}
