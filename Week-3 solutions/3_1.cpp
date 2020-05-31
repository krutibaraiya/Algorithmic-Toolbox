#include<bits/stdc++.h>
using namespace std;

long long int get_change(long long int m) {
	long long int a=0,b=0,c=0,n=0;
	a=m/10;
	m=m%10;
	b=m/5;
	m=m%5;
	c=m/1;
	n=a+b+c;
  return n;

}
 

int main() {
  long long int m;
  cin >> m;
  cout << get_change(m) << '\n';
  return 0;
}
