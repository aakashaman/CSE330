#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

bool isReachable(int sx, int dy)
{
    // base case
    if (sx > dy)
        return false;
 
    // current point is equal to destination
    if (sx == dy)
        return true;
 
    // check for other 2 possibilities
    return (isReachable(sx+dy,dy) ||
            isReachable(sx,sx+dy));
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int source_x = 2;
    int dest_y = 2;
    if (isReachable(source_x,dest_y))
        cout << "True\n";
    else
        cout << "False\n";
    return 0;

    return 0;
}
