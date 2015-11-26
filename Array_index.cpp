#include <stdio.h> 
#include<string.h>
#include<iostream>
using namespace std;
int main() 
{ 
char s[]="hisdf";
char ss[34];
strcpy(ss,&s[3]);
cout<<ss;

return 0; 
} 
