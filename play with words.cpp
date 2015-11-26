#include<iostream>
#include<string.h>
using namespace std;
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
int lps(char *s)
{
	int n=strlen(s),i,j,c;
	int a[n][n];
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==j)
			{
				a[i][j]=1;
			}
			else
				a[i][j]=0;
		}
	}
	for(c=2;c<=n;c++)
	{
		for(i=0;i<n-c+1;i++)
		{
			j=i+c-1;
			if(s[i]==s[j]&&c==2)
			{
				a[i][j]=2;
			}
			else if(s[i]==s[j])
			{
				a[i][j]=a[i+1][j-1]+2;
			}
			else
			{
				a[i][j]=max(a[i][j-1],a[i+1][j]);
			}
			
		}
	}
	return a[0][n-1];
}
int main()
{
	char s[4000],a[4000],b[4000];
	int m,n,k,max=0,i;
	cin>>s;
	n=strlen(s);
	for(i=1;i<strlen(s)-1;i++)
	{
		memcpy(a,s,i+1);
		strcpy(b,&s[i+1]);
		m=lps(a);
		k=lps(b);
	//	cout<<m<<" "<<k<<endl;
		if(m*k>max)
		{
			max=m*k;
		}
		
	}
	cout<<max<<endl;
	
	return 0;
}
