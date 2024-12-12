#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


#define sz(v)			((int)((v).size()))
#define rep(i, v)		

const int OO = (int)1e6;

int BFS(int n, int m, vector<vector<char>>& v) {
   
    vector<pair<int, int>> mv = { {1, 0}, {0, 1}, {-1, 0}, {0, -1} };

    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int ctn = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (v[i][j] == '.' && !visited[i][j]) {
                queue<pair<int, int>> q;
                q.push({ i, j });
                visited[i][j] = true;

                while (!q.empty()) {
                    pair<int, int> r =q.front();
                    q.pop();
                    int x= r.first;
                    int y= r.second;

                    for (auto d :mv) {
                        int nx = x +d.first, ny = y+d.second;
                        if (nx>= 0 && nx<n && ny >= 0 && ny <m && v[nx][ny]== '.' && !visited[nx][ny]) {
                            q.push({ nx, ny });
                            visited[nx][ny] = true;
                        }
                    }
                }
                ctn++;
            }
        }
    }

    return ctn;
}



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n, m;
	cin >> n >> m;

	
	vector<vector<char>> v(n, vector<char>(m));
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> v[i][j];
		}
	}

	cout << BFS(n, m, v) << endl;
    return 0;
}
