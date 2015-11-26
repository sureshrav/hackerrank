#include<iostream>
using namespace std;
#include<string.h>
#define m 200
bool visited[m][m];
char input[m][m];
int r,c;
int x[8]={0,1,-1,1,-1,0,-1,1};
int y[8]={1,0,1,1,-1,-1,0,-1};
char pi[11]={'A','L','L','I','Z','Z','W','E','L','L'};
bool check(int i,int j)
{
	if(i>=0&&i<r&&j>=0&&j<c)
		return true;
	return false;
}
string dfs(int i,int j,int p) 
{
	string s;

	visited[i][j]=1;
	if(p==9)
	{
		return "YES";
	}
	else
	{
		for(int n=0;n<8;n++)
		{
			if(check(i+x[n],j+y[n]))
			{
				if(input[i+x[n]][j+y[n]]==pi[p+1]&&visited[i+x[n]][j+y[n]]!=1)
				{
					visited[i+x[n]][j+y[n]]=1;
					s=dfs(i+x[n],j+y[n],p+1);
					if(s=="YES")
					{
						return s;
					}
					visited[i+x[n]][j+y[n]]=0;
					
				}
			}
		}
	}
	visited[i][j]=0;
	return "NO";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(visited,0,sizeof(visited));
		cin>>r>>c;
		int i,j;
		for(i=0;i<r;i++)
		{
			cin>>input[i];
		}
		bool flag=false;
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				if(input[i][j]=='A'&&dfs(i,j,0)=="YES")
				{
					flag=true;
					break;
				}
			}
			if(flag)
			{
				break;
			}
		}
		if(flag)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}

	
}
