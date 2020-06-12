#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
const int N = 1e5 + 5;

vector<int> optimal_sequence(int n) {   //Using Greedy approach(incorrect)
  vector<int> sequence;
  while (n >= 1) {
    sequence.push_back(n);
    if (n % 3 == 0) {
      n /= 3;
    } else if (n % 2 == 0) {
      n /= 2;
    } else {
      n = n - 1;
    }
  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}

vector<int> dp_sequence(int n)  //Using Dynamic Programming
{
	vector<int> sequence;
	vector<int> dp(n+1);

	for(int i=1; i<dp.size(); i++)
	{
		dp[i]=dp[i-1]+1;
		if(i%2==0)
			dp[i]= min(1+dp[i/2],dp[i]);
		if(i%3==0)
			dp[i]= min(1+dp[i/3],dp[i]);
	}

	int i=n;
	while(i>1)
	{
		sequence.push_back(i);
		if(dp[i-1]==dp[i]-1)
			i=i-1;
		else if(i%2 == 0 && dp[i/2]== dp[i]-1)
			i/=2;
		else if(i%3 == 0 && dp[i/3]== dp[i]-1)
			i/=3;
	}
	sequence.push_back(1);
	reverse(sequence.begin(), sequence.end());
	return sequence;

}

int32_t main() {
  IOS;
  int n;
  cin >> n;
  //vector<int> sequence = optimal_sequence(n);
  vector<int> sequence = dp_sequence(n);
  cout << sequence.size() - 1 << endl;
  for (size_t i = 0; i < sequence.size(); ++i) {
    cout << sequence[i] << " ";
  }

  }


