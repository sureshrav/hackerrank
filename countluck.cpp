#include<iostream>
using namespace std;
char b[105][105];
int bx,by,cnt=0;
const int dx[] = {1,-1,0,0},dy[] = {0,0,-1,1};
bool norm(int x,int y)
{
return x >= 0 && y >= 0 && x < bx && y < by;
}
bool dfs(int x,int y,int px=-1,int py=-1)
{
	int i,j;

	
	if(b[x][y]=='*')
	{
		return 1;
	}
	int cc=0;
	bool f=0;
	for(i=0;i<4;i++)
	{
		int vx=x+dx[i];
		int vy=y+dy[i];
		if(!norm(vx,vy))
		{
			continue;
		}
		if(vx==px&&vy==py)
		{
			continue;
		}
		if(b[vx][vy]=='X')
		{
			continue;
		}
		if(dfs(vx,vy,x,y))
		{
			f=1;
		}
		++cc;
	}
	if(f&&cc>1)
	{
		++cnt;
	}
	return f;
}
int main()
{
	int ttime,i,j;
		int mx,my;
	cin>>ttime;
	while(ttime--)
	{
	
		cin>>bx>>by;
		for(i=0;i<bx;i++)
		{
			for(j=0;j<by;j++)
			{
				cin>>b[i][j];
				if(b[i][j]=='M')
				{
					mx=i;
					my=j;
				}
			}
		}
		int k;
		cin>>k;
		cnt=0;
		dfs(mx,my);
		
		if(cnt==k)
		{
			cout<<"Impressed"<<endl;
		}
		else
		{
			cout<<"Oops!"<<endl;
		}
	}
	return 0;
}
