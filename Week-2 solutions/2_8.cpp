#include<bits/stdc++.h>
using namespace std;

long long fib(long long n){
    long long rem=0;
    rem= n%60;
    long long ff=0;
    long long ss=1;
    long long r=rem;
    for(long long int i=1; i< rem; i++){
        r=(ff +ss)%10;
        ff=ss;
        ss=r;
    }
    long long a= (r%10);
    return a;
    
}
int fib_sq_sum(long long n) {
    long long int a=0;
    a= fib(n+1) * fib(n);
    return a%10;
}

int main() {
    long long n = 0;
    cin >> n;
    cout << fib_sq_sum(n);
    return 0;
}
