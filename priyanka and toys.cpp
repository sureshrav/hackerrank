#include<iostream>
using namespace std;
#include<algorithm>
int w[10000];
int main()
{
	int n,i,j,k;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>w[i];
	}
	sort(w,w+n);
	k=1;
	j=w[0];
	for(i=1;i<n;i++)
	{
		if((w[i]-j)>4)
		{
			k++;
			j=w[i];
		}
	}
	cout<<k<<endl;
	return 0;
}
