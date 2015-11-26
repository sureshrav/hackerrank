#include<iostream>
#include<algorithm>
using namespace std;
long long int a[100005],s,t,n,i,k,c;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		if(n==1)
		{
			cout<<a[0]<<endl;
			continue;
		}
		sort(a,a+n);
		s=a[0];
		
		for(i=1;i<n;i++)
		{
			if((a[i]%s)==0)
			{
				continue;
			}
			k=a[i]%s;
			while(s!=k)
			{
				c=s;
				s=k;
				k=((c%s)==0)?s:(c%s);
			}
			if(s==1)
			{
				break;
			}
		}
		cout<<n*s<<endl;
	}
	
}
