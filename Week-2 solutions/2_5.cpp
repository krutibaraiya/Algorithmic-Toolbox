#include<bits/stdc++.h>
using namespace std;


long long pisano(long long m){
    long long a=0, b=1, c = a+b;
    for(long long int i=0; i < m*m ; i++){
        c=(a+b)%m;
        a=b;
        b=c;

        if( a==0 && b==1)
            return i+1;
    }
}

long long fib(long long n, long long m){
    long long rem=0;
    rem= n% pisano(m);
    long long ff=0;
    long long ss=1;
    long long r=rem;
    for(long long int i=1; i< rem; i++){
        r=(ff +ss)%m;
        ff=ss;
        ss=r;
    }
    long long a= (r%m);
    return a;
    
}

int main(){
    long long n, m;
    cin >> n >> m;
    cout << fib(n,m) << endl;
    cout << pisano(m) << endl;
    return 0;
}


