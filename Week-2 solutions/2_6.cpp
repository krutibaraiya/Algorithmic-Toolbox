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


int fib_sum( long long n) {
    if (fib(n+2) >= 1)
        return fib(n+2)- 1;
    else
        return fib(n+2)+9;
}

int main() {
    long long n;
    cin >> n;
    cout << fib_sum(n)<< endl;
    return 0;
}
    
    
