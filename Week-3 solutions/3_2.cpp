#include<bits/stdc++.h>
using namespace std;

int main() 
	{
	 int n, bagsize; 
	cin >> n >> bagsize;
	vector<pair<int,  int>> w(n); 
	vector<pair<double, int>> v(n);

	for ( int i = 0; i < n; i++) 
	{
		cin >> w[i].first >> w[i].second;
		v[i].first = 1.0 * w[i].first / w[i].second; 
		v[i].second = w[i].second;
	}

	sort(v.begin(), v.end(),greater<pair<double,int>>());
	double Res = 0;

	for (int i = 0; i < v.size() && bagsize>0; i++) 
	{
		Res += min(v[i].second, bagsize)*v[i].first;
		bagsize -= min(v[i].second, bagsize); 
	}

	cout << fixed << setprecision(4) << Res << endl;
}
