#include<iostream>
#include<math.h>
#include<algorithm>
#include<stdio.h>
using namespace std;
int main()
{
	double l,x,y,q,i,m,v;
	cin>>l>>x>>y;
	cin>>q;
	v=abs((long long int)(x-y))/sqrt(2);
	for(i=0;i<q;i++)
	{
		cin>>m;
		printf("%.4f\n",((l-sqrt(m))/v));
	}
	return 0;
	
}
