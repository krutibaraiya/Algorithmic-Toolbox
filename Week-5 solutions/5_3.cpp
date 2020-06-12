#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N = 1e5 + 5;

int edit_distance(const string &str1, const string &str2) 
{
  int p= str1.size();
  int q= str2.size();
  vector<vector<int>> dp(p+1,vector<int>(q+1,0));
  for(int i=0; i<=p; i++)
  {
  	dp[i][0]=i;
  }

  for(int i=0; i<=q;i++)
  {
  	dp[0][i]=i;
  }
  int cost=0;

  for(int i=1; i<=p;i++)
  {
  	for(int j=1; j<=q; j++)
  	{
  		if(str1[i-1]==str2[j-1])
  			cost=0;
  		else
  			cost=1;
  		dp[i][j]=min(min(dp[i-1][j],dp[i][j-1])+1,dp[i-1][j-1]+cost);
  	}

  }

  return dp[p][q];
}


int32_t main() {
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << edit_distance(str1, str2) << endl;
  return 0;
}


