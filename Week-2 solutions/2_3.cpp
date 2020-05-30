#include<bits/stdc++.h>
using namespace std;

/*int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}*/

long long int GCD(long long int a , long long int b) {
  if (a == 0)
    return b; 
  return GCD(b%a,a); 
}

int main() {
  long long int a, b;
  std::cin >> a >> b;
  std::cout << GCD(a, b) << std::endl;
  return 0;
}
