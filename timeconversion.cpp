#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>


using namespace std;


int main(){
    string time;
    int i,z;
    cin >> time;
    if(time[8]=='A')
        {
        for(i=0;i<8;i++)
            {
            cout<<time[i];
        }
    }
    else
        {
        int x=time[0],y=time[1];
        z=10*x+y;
        z+=12;
        cout<<z;
        for(i=2;i<8;i++)
            {
            cout<<time[i];
        }
    }
    return 0;
}

