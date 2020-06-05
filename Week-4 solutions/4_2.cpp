#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

 

int get_majority_element(vector<int> &a, int left, int right) {
  //if (left == right) return -1;
  //if (left + 1 == right) return a[left];

  vector<int> v;

  for(auto i : a)
  {
    if(!v.empty() &&v[v.size()-1] != i)
      v.pop_back();
    else if(v.empty() || v[v.size()-1] == i)
      v.push_back(i);

  }
  if(v.empty())
    return 0;

  int person =v[v.size()-1];
  v.pop_back();
  int count = 0;

  for(auto x:a)
  {
    if(x==person)
      count+=1;
  }
  if(count > a.size()/2)
    return 1;

  return 0;
  
}


int32_t main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << get_majority_element(a, 0, n != -1) << endl;
}
