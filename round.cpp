#include<iostream>
#include<math.h>
using namespace std;
long long int t,n,b,x,y;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n>>b;
		
		y=round((float)n/(float)b);
		x=b*y;
		cout<<x<<endl;
	}
}
