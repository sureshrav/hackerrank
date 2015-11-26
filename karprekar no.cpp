#include<iostream>
using namespace std;
int main()
{
	long long int p,q,i,j,l=10,x=0;
	cin>>p>>q;
	while(p>l)
	{
		l=l*10;
	}
	for(i=p;i<=q;i++)
	{
		if(i==l)
		{
			l*=10;
		}
		j=i*i;
		if(i==((j/l)+(j%l)))
		{
			x++;a
			cout<<i<<" ";
		}
	}
	return 0;
}
