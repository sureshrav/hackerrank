#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	unsigned long long int n,i,j,x,y,m;
	x=0;
	y=0;
	cin>>n;

	i=n;
	while(i>0)
	{
		x+=(i%10);
		i/=10;
}
	j=n;
//cout<<x<<endl;
	while(j%2==0)
	{
//	cout<<2<<endl;
		y+=2;
		j/=2;
	}
	for(i=3;i<=sqrt(n);i=i+2)
	{
			while(j%i==0)
			{
	//	cout<<i<<endl;
				m=i;
				while(m>0)
				{
				
				y+=m%10;
				m/=10;
				}
				j/=i;
			}
		
	}
	if(j!=1)
    {
    
		m=j;
				while(m>0)
				{
				
				y+=m%10;
				m/=10;
				}
			
			
	}
	//cout<<y<<endl;
	if(x==y)
	{
		cout<<1;
	}
	else
		cout<<0;
		
		
	return 0;
	
}
