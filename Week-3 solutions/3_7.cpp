#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

bool comp(string a, string b)
{
  string X,Y;
  X=a.append(b);
  Y=b.append(a);

  return X.compare(Y) >0 ? 1:0;

}

string largest_number(vector<string> a) {
  //write your code here
  sort(a.begin(),a.end(),comp);
  std::stringstream ret;
  for (size_t i = 0; i < a.size(); i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int32_t main() {
  IOS;
  int n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << largest_number(a);
}
