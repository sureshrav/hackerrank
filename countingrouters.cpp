#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define m 1234567;

long long int t,n,f,i,k;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>t;
    while(t--)
    {
        cin>>n;
        f=1;
        for(i=1;i<=n-1;i++)
            {
            
            cin>>k;
            f=(f*k)%m;
        }
        cout<<f<<endl;
    }
    return 0;
}

