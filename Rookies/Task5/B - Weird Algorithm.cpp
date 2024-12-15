#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

ll num(ll n){

    if (n == 1) {
		cout << 1 ;
        return 1;
    }
    
    cout << n << " " ;
    if (n % 2 == 0) {
        return num(n / 2);
    }
    else {
		return num(3 * n + 1);
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n ;

	num(n);

    return 0;
}
