#include <bits/stdc++.h>
using namespace std;
#define int long long

int dp_optimal_weight(int W,vector<int> value,vector<int> weight,int n) 
{

  vector<vector<int>> dp(n+1,vector<int>(W+1));
  for(int i=0; i<=n; i++)
  {
    for(int j=0;j<=W;j++)
    {
      if(i==0 || j==0)
        dp[i][j]=0;
      else if(weight[i-1]<=j)
        dp[i][j]=max(value[i-1]+dp[i-1][j-weight[i-1]] , dp[i-1][j]);
      else
        dp[i][j]= dp[i-1][j];


    }
  }
  return dp[n][W];
}

int32_t main() {
  int n, W;
  cin >> W >> n;

  vector<int> value(n);
  vector<int> weight(n);
  int temp;
  for (int i = 0; i < n; i++) {
      cin >> temp;
      value[i]=weight[i]=temp;
  }
  cout << dp_optimal_weight(W, value,weight,n) << '\n';
}
