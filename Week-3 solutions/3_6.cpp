#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
 

vector<int> optimal_summands(int n) {
  vector<int> summands;
  int ans=n;
  int x=1;

  while(true)
  {
    if(ans<=2*x)
    {
      summands.push_back(ans);
      break;
    }
    else
    {
      summands.push_back(x);
      ans-=x;
      x+=1;
    }
  }

  return summands;
}

int32_t main() {
  IOS;
  int n;
  cin >> n;
  vector<int> summands = optimal_summands(n);
  cout << summands.size() << endl;
  for (int i = 0; i < summands.size(); i++) {
    cout << summands[i] << ' ';
  }
}

 


