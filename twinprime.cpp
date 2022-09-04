#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

void solve(int n) {
    
{
  
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++) {
         
       
        if (prime[p] == true) {
             
            for (int i = p * 2; i <= n; i += p)
                prime[i] = false;
        }
    }
 

    for (int p = 2; p <= n - 2; p++)
        if (prime[p] && prime[p + 2])
            cout << "(" << p << ", " << p + 2 << ")" ;
}
 
    
    
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    solve(n);
    return 0;
}
