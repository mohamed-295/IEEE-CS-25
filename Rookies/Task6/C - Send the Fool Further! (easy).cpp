#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

void dfs(int node, int cost, vector<vector<pair<int, int>>>&mat, vector<bool>&vis, int& mx) {
	if (vis[node]) return;
	vis[node] = true;
	mx = max(mx, cost);
	for (auto& p : mat[node]) {
		int next = p.first;
		int c = p.second;
		if (!vis[next]) {
			dfs(next, cost + c, mat, vis, mx);
		}
	}
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	
	int n,mx=0;
	cin >> n ;
	vector<vector<pair<int,int>>> mat(n);
	vector<bool> vis(n, false);
	for (int i = 0; i < n-1; ++i) {
		int u, v, c;
		cin >> u >> v >> c;
		mat[u].push_back({ v,c });
		mat[v].push_back({ u,c });

	}
	dfs(0, 0, mat, vis, mx);

	
	


		cout << mx << endl;
	
	

	

    
    return 0;
}
