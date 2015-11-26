#include<iostream>
#include<algorithm>
using namespace std;
long long int N,Q,*a,i,x,k,t,inx;
long long int bsearch(long long int ele)
{
	long long int l=0,h=N-1,m;
	while(l<=h)
	{
		m=(l+h)/2;
		if(a[m]==ele)
		{
			return m;
		}
		else if(a[m]<ele)
		{
			l=m+1;
		}
		else
		{
			h=m-1;
		}
	}
	
	
}

int main()
{
	cin>>N>>Q;
	a=new long long int[N];
	for(i=0;i<N;i++)
	{
		cin>>a[i];
	}
	sort(a,a+N);
	for(i=0;i<Q;i++)
	{
		cin>>x>>k>>t;
		inx=bsearch(x);
		if(t==0)
		{
			if((inx+k)<=(N-1))
			{
				
				cout<<a[inx+k]<<endl;
			}
			else
			{
				cout<<"-1"<<endl;
			}
		}
		else
		{
			if((inx-k)>=0)
			{
				cout<<a[inx-k]<<endl;
				
			}
			else
			{
				cout<<"-1"<<endl;
			}
		}
	}
	
}
