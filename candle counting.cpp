#include<iostream>
using namespace std;
int main()
{
	long int n,c,k,i,j,a[8]={0};
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>j>>c;
		a[c]++;
	}
	long long int m=1;
	for(i=0;i<8;i++)
	{
	
		if(a[i]!=0)
		{
		
		m=m*a[i];
		}
	}
	cout<<m%1000000007;
	return 0;
}
