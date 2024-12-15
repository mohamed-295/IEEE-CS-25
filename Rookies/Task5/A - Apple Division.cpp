#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

ll all(vector<ll>& v, ll sum, ll tot, ll x) {
    if (x == v.size()) {
        return abs(tot - 2 * sum);
    }
    return min(all(v, sum + v[x], tot, x + 1), all(v, sum, tot, x + 1));
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
	ll tot = 0;
    cin >> n;

    vector<ll> v(n);
    for (int i = 0; i <n; i++) {
        cin >> v[i];
        tot += v[i];
    }
	int res = all(v, 0, tot, 0);
    cout << res  << endl;

    return 0;
}
