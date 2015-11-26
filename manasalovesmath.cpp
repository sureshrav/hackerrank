#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int t,len,x,y,z,i,j,k;
	char a[120];
	cin>>t;
	while(t--)
	{
		cin>>a;
		len=strlen(a);
		bool f=false;
		if(len<3)
		{
			if(len==1)
			{
				if((a[0]-48)%8==0)
				{
					f=true;
				}
			}
			else
			{
				x=a[0]-48;
				y=a[1]-48;
				if(((10*x)+y)%8==0)
				{
					f=true;
				}
				if(((10*y)+x)%8==0)
				{
					f=true;
				}
			}
		}
		else
		{
			for(i=0;i<len;i++)
			{
				for(j=i+1;j<len;j++)
				{
					for(k=j+1;k<len;k++)
					{
						int x=a[i]-48;
						int y=a[j]-48;
						int z=a[k]-48;
						if(((100*x)+(10*y)+z)%8==0)
						{
							f=true;
						}
						if(((100*x)+(10*z)+y)%8==0)
						{
							f=true;
						}
						if(((100*y)+(10*x)+z)%8==0)
						{
							f=true;
						}
							if(((100*y)+(10*z)+x)%8==0)
						{
							f=true;
						}
							if(((100*z)+(10*x)+y)%8==0)
						{
							f=true;
						}
							if(((100*z)+(10*y)+x)%8==0)
						{
							f=true;
						}
						if(f)
							break;
					}
					if(f)
							break;
				}
				if(f)
							break;
				
			}
		}
		if(f)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
}
