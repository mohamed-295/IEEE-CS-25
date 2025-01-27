#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define ll long long
#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

void dfs(int i, int j, vector<vector<int>>&mat, vector<vector<bool>>&vis, int& v) {
	if (i < 0 || i >= sz(mat) || j < 0 || j >= sz(mat[0]) || vis[i][j] || mat[i][j]==0) {
		return;
	}
	vis[i][j] = true;
	v+=mat[i][j];
	dfs(i + 1, j, mat, vis, v);
	dfs(i - 1, j, mat, vis, v);
	dfs(i, j + 1, mat, vis, v);
	dfs(i, j - 1, mat, vis, v);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
	int n, m;
	cin >> n >> m;
	vector<vector<int>> mat(n, vector<int>(m));
	vector<vector<bool>> vis(n, vector<bool>(m, false));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> mat[i][j];
		}
	}

	int mx = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (!vis[i][j] && mat[i][j]>0) {
				int v = 0;
				dfs(i, j, mat, vis,v);
				mx = max(mx, v);
			}

			}
		}


		cout << mx << endl;
	}
	

	

    
    return 0;
}
