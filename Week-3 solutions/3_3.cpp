#include <bits/stdc++.h>
using namespace std;
 
int compute_min_refills(int city_dist, int full_tank_dist, vector<int> &stops, int count = 0)
{
    // write your code here
    int rCount = 0;
    int refillPos = -2;
    int i = 0;
    int currLocation = 0;
    stops.push_back(city_dist);
    while (true)
    {
        if (full_tank_dist + currLocation >= city_dist)
        {
            return rCount;
        }
        if (full_tank_dist < stops[i] - currLocation)
        {
            refillPos = i - 1;
            if (currLocation == stops[refillPos])
            {
                return -1;
            }
            rCount++;
            currLocation = stops[i - 1];
            i -= 1;
            continue;
        }
        i++;
    }
    return -1;
}




int main()
{
    int city_dist = 0;
    cin >> city_dist;
    int full_tank_dist = 0;
    cin >> full_tank_dist;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    cout << compute_min_refills(city_dist, full_tank_dist, stops) << endl;

    return 0;
}