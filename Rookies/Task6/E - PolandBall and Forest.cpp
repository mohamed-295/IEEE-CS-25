#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

void dfs(int node, vector<vector<int>> &tree, vector<bool> &vis) {
	vis[node] = true;
		for (int i = 0; i < sz(tree[node]); ++i) {
			if (!vis[tree[node][i]]) {
				dfs(tree[node][i], tree, vis);
			}
		}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	int n;
	cin >> n  ;
	vector<vector<int>> tree(n);
	vector<bool> vis(n,false);
	for (int i = 0; i < n; ++i) {
		int p;
		cin >> p;
		if (--p != i) { 
			tree[i].push_back(p);
			tree[p].push_back(i);
		}
	}
	int ctn = 0;


	for (int i = 0; i < n ; ++i) {
		if (!vis[i]) {
			ctn++;
			dfs(i, tree, vis);
		}
	}

	

	
	cout << ctn  << endl;

	

    
    return 0;
}
