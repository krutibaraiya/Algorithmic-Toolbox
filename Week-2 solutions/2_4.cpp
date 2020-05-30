#include<bits/stdc++.h>
using namespace std;
long long int GCD(long long int a , long long int b) {
  if (a == 0)
    return b; 
  return GCD(b%a,a); 
}


long long LCM(long long int a, long long int b) {
	return a / (long long int)(GCD(a, b))* b;
}
int main() {
	long long int a,b;
	 
	cin >> a >> b; 
	cout << LCM(a, b) << endl;
}





