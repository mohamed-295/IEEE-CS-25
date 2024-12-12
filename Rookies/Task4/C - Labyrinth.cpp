#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

#define sz(v) ((int)((v).size()))
#define rep(i, v) for (int i = 0; i < sz(v); ++i)

const int OO = (int)1e6;

string BFS(const vector<vector<char>>&v, int n, int k, int& x, int& y) {
    vector<vector<int>> moves = { {1, 0, 'D'}, {0, 1, 'R'}, {-1, 0, 'U'}, {0, -1, 'L'} };
    vector<vector<char>> mv(n, vector<char>(k));
    vector<vector<bool>> visited(n, vector<bool>(k, false));
    queue<pair<int, int>> q;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            if (v[i][j] == 'A') {
                q.push({ i, j });
                visited[i][j] = true;
                while (!q.empty()) {
                    pair<int, int> cur = q.front();
                    q.pop();
                    for (auto m : moves) {
                        int dx = cur.first + m[0];
                        int dy = cur.second + m[1];
                        if (dx >= 0 && dx < n && dy >= 0 && dy < k) {
                            if (v[dx][dy] == 'B') {
                                x = dx;
                                y = dy;
                                mv[dx][dy] = (char)m[2];
                                string ans;
                                while (v[x][y] != 'A') {
                                    ans.push_back(mv[x][y]);
                                    if (mv[x][y] == 'D') { x--; }
                                    else if (mv[x][y] == 'U') { x++; }
                                    else if (mv[x][y] == 'L') { y++; }
                                    else if (mv[x][y] == 'R') { y--; }
                                }
                                reverse(ans.begin(), ans.end());
                                return ans; 
                            }
                            else if (v[dx][dy] == '.' && !visited[dx][dy]) {
                                mv[dx][dy] = (char)m[2];
                                q.push({ dx, dy });
                                visited[dx][dy] = true;
                            }
                        }
                    }
                }
            }
        }
    }
    return "NO"; 
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
    cin >> n >> k;

    vector<vector<char>> v(n, vector<char>(k));

   
    string s;
    getline(cin, s); 
    for (int i = 0; i < n; ++i) {
        getline(cin, s);  
        for (int j = 0; j < k; ++j) {
            v[i][j] = s[j];
        }
    }

    int x = 0, y = 0;
    string res = BFS(v, n, k, x, y);

    if (res == "NO") {
        cout << res << endl;
    }
    else {
        cout << "YES" << endl;
        cout << res.length() << endl;
        cout << res << endl;
    }

    return 0;
}
