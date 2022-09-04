#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {

  int n, reversed_number = 0, remainder;
  bool is_prime = true;
  cin >> n;

  while(n != 0) {
    remainder = n % 10;
    reversed_number = reversed_number * 10 + remainder;
    n /= 10;
  }
  if (n == 0 || n == 1 && reversed_number ==0 || reversed_number==1) {
    is_prime = false;
  }
  for (int i = 2; i <= n/2; ++i) {
    if (n % i == 0 ) {
      is_prime = false;
      break;
    }
  }
  
   for (int i = 2; i <= reversed_number/2; ++i) {
    if (reversed_number % i == 0 ) {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
    cout << "Yes";
  else
    cout << "No";

  return 0;
}