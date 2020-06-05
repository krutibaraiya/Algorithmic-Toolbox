#include<bits/stdc++.h>
using namespace std;


 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 

int binary_search(const vector<int> &a, int x) {
  int left = 0, right = (int)a.size(); 
  //write your code here
  while (left <= right)
  {
    int mid = (left + right) / 2;

    if (a[mid] == x)
      return mid;

    else if (a[mid] > x)
      right = mid - 1;

    else
      left = mid + 1;
  }
  return -1;
}

int32_t main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
  for (int i = 0; i < m; ++i) {
    //replace with the call to binary_search when implemented
    cout << binary_search(a, b[i]) << ' ';
  }
}






