#include<iostream>
using namespace std;
int main()
{
	long long int t,i,n,m,v;
	cin>>t;
	while(t--)
	{
	
		cin>>n>>m;
		i=1;
		while(1)
		{
			v=((i-1)*n*n)/(2*i);
			if(v>=m)
			{
				break;
			}
			i++;
		}
		cout<<i<<endl;
	}
	return 0;
}
