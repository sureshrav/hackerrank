#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main()
{
	int n,c,i,j,k,x,y;
	int a[300],t[300][300];
	cin>>n>>c;
	for(i=0;i<c;i++)
	{
		cin>>a[i];
	}
	sort(a,a+c);
	memset(t,0,90000*sizeof(int));
	for(i=0;i<300;i++)
	{
		t[0][i]=1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=0;j<c;j++)
		{
			x=((i-a[j])>=0)?t[i-a[j]][j]:0;
				y=((j!=0))?t[i][j-1]:0;
				t[i][j]=x+y;
			
		}
	}
	cout<<t[n][c-1]<<endl;
	return 0;
}
	
	 
	
