#include<math.h>
#include<iostream>
#include<stdio.h>

using namespace std;
long long int n,i,k;
double p=0,nn=0,z=0;

int main(){
  
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin>>k;
        if(k>0)
        {
            p++;
        }
        else if(k==0)
            {
            z++;
        }
        else
            {
            nn++;
        }
    }
    p/=n;
    nn/=n;
    z/=n;
    printf("%.3f\n",p);
     printf("%.3f\n",nn);
      printf("%.3f\n",z);
    return 0;
}

