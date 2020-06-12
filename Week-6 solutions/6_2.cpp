#include <bits/stdc++.h>
using namespace std;
#define N 1e9 +5
#define endl '\n'

int w, n;
int items[301];
int dp[10001][301];
int partition3(int w, int curr)
{
  if (curr >= n)
    return 0;
  if (dp[w][curr] != 0)
    return dp[w][curr];
  int ans = partition3(w, curr + 1);
  if (items[curr] <= w)
    ans = max(ans, (partition3(w - items[curr], curr + 1) + items[curr]));
  return dp[w][curr] = ans;
}

void partitioning_souvenirs()
{
  int x;
  cin >> n;
  int maxElement = -N;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    maxElement = max(maxElement, x);
    items[i] = x;
    sum += x;
  }
  partition3(sum, 0);
  partition3(sum * 2 / 3, 0);
  partition3(sum / 3, 0);
  if (sum % 3 == 0 && sum / 3 == dp[sum / 3][0] && sum * 2 / 3 == dp[sum * 2 / 3][0] && sum == dp[sum][0])
    cout << 1 << endl;
  else
    cout << 0 << endl;
}

int main()
{
  partitioning_souvenirs();
  return 0;
}

