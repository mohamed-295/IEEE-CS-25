#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

ll fib(int n) {
	if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n ;

    
        cout << fib(n) << endl;
    

    return 0;
}
