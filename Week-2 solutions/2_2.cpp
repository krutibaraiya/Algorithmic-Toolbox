#include<bits/stdc++.h>
using namespace std;

    int get_fibonacci_last_digit_naive(long long int n) {
    long long int a[n+1];
    a[0]=0;
    
    a[1]=1;
    
    for(long long int i=2; i<=n; i++){
        a[i]= ((a[i-1] + a[i-2]) % 10);
    }

    return a[n];
}

int main() {
    long long int n;
    std::cin >> n;
   long long int c = get_fibonacci_last_digit_naive(n);
    std::cout << c << '\n';
    }
