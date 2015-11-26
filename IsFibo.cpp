#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	unsigned long long int i,j,x,y,n,t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n==0||n==1)
		{
			cout<<"IsFibo"<<endl;
			continue;
		}
		x=0;
		y=1;
		
		while(1)
		{
			z=x+y;
			x=y;
			y=z;
			if(z==n)
			{
				cout<<"IsFibo"<<endl;
				break;
			}
			else if(z>n)
			{
				cout<<"IsNotFibo"<<endl;
				break;
			}
		}
		
	}
	return 0;
	
}
