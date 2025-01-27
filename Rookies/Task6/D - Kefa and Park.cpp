#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

int dfs(int u, int p, int cat, int m, vector<vector<int>>&tree, vector<int>&cats) {
	if (cats[u] == 1) {
		cat++;
	}
	else {
		cat = 0;
	}
	if (cat > m) {
		return 0;
	}
	if (sz(tree[u]) == 1 && u != 0) {
		return 1;
	}
	int ans = 0;
	for (int v : tree[u]) {
		if (v != p) {
			ans += dfs(v, u, cat, m, tree, cats);
		}
	}
	return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	int n,m;
	cin >> n >> m ;
	vector<vector<int>> tree(n);
	vector<int> cats(n);
	for (int i = 0; i < n; ++i) {
		cin >> cats[i];

	}
	

	for (int i = 0; i < n - 1; ++i) {
		int u, v;
		cin >> u >> v;
		tree[--u].push_back(--v);
		tree[v].push_back(u);
	}

	
	int rest = dfs(0,0,0, m, tree, cats);

		cout << rest << endl;
	
	

	

    
    return 0;
}
