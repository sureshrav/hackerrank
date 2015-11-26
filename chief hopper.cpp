#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    long long int n,i,j,k,x,y;
    cin>>n;
    long long int a[n];
    	for(i=0;i<n;i++)
        {
        cin>>a[i];
   		}
   		x=pow(2,n);
   		y=0;
   		for(i=0;i<n;i++)
   		{
   			j=pow(2,i);
   			y+=(j*a[n-1-i]);
   		}
    	cout<<floor(y/x)<<endl;
    return 0;
}

