#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long


pair<int,int> partition(vector<int> &a, int left, int right)
{
    int x=a[left],y;
    int j=left;

    for(int i=left+1; i<=right;i++)
    {
      if(a[i]<=x)
      {
        j++;
        swap(a[i],a[j]);
      }
    }

    swap(a[left],a[j]);
    y=j-1;

    for(int i=left;i<j && y>=left &&y>=i;)
    {
      if(a[j]==a[i])
        swap(a[i],a[y--]);
      else
        i++;
    }
    y++;

    return make_pair(y,j);
}


void improvised_quick_sort(vector<int> &a, int left, int right)
{
  if(left>=right)
    return;

  int k= left + rand() % (right - left + 1);
  swap(a[left], a[k]);

  pair<int, int> p= partition(a, left, right);
  
  
  improvised_quick_sort(a,left,p.first-1);
  improvised_quick_sort(a,p.second+1,right);
}

int32_t main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  improvised_quick_sort(a, 0, a.size() - 1);
  for (int i = 0; i < a.size(); ++i) {
    cout << a[i] << ' ';
  }
}








