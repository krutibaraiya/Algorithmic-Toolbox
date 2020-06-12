#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N = 1e5 + 5;


int get_change(int coins[], int n, int money) 
{
  
	vector<int> dp(money+1,N);
	dp[0]=0;
	for(int i=1; i<=money; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i>=coins[j])
			{
				int rem= dp[i-coins[j]];
				if(rem!= N && rem+1 < dp[i])
					dp[i]= rem+1;
			}
		}
	}
  return dp[money];
}



int32_t main() {
	IOS;
  	int money;
  	cin >> money;
  	int coins[3]={1,3,4};
 	cout << get_change(coins,3,money) << endl;
}



