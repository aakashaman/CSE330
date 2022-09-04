#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;
vector<int> primeFactorisation(int n) {
  vector<int> ans;
  while(n%2==0) {
    ans.push_back(2);
    n/=2;
  }

  for(int i=3;i*i<=n;i++) {
    while(n%i==0) {
      ans.push_back(i);
      n/=i;
    }
  }
  if(n>2) {
    ans.push_back(n);
  }
  return ans;
}
vector<int> printPrimeFactors(int n) {
  vector<int> v = primeFactorisation(n);
  vector<int> ans;
  ans.push_back(v[0]);
  for(int i=1;i<v.size();i++) {
    if(v[i]!=v[i-1])
       ans.push_back(v[i]);     
  }
  return ans;

}
bool isdivisible(int n,int m){
    vector<int> v = primeFactorisation(m);
    for(int i=0;i<v.size();i++){
        if(n%v[i]!=0){
            return false;
        }


    }
        return true;
}


int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,m;
    cin>>n>>m;
    if(isdivisible(n,m)){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }



    return 0;
}
