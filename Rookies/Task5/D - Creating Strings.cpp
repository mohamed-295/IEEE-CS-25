#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <set>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

void all(string s,  int l, int r, set<string>&st) {
    if (l == r) {
        st.insert(s);
    }
    else {
        for (int i = l; i <= r; ++i) {
            swap(s[l], s[i]);
            all(s, l + 1, r, st);
            swap(s[l], s[i]);
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s ;

	set<string> st;  
	all(s,0,sz(s)-1, st);

	vector<string> v(st.begin(),st.end());
	cout << sz(v) << endl;
	for (string& s : v) {
		cout << s << endl;
	}
   

    return 0;
}
