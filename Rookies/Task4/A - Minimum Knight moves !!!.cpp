#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;


#define sz(v)			((int)((v).size()))
#define rep(i, v)		

const int OO = (int)1e6;

void BFS(vector<vector<int>> &v, int x1, int y1, int x2, int y2) {
	int x[] = { -2,-1,+1,+2,+2,+1,-1,-2 };

	int y[] = { +1,+2,+2,+1,-1,-2,-2,-1 };
	queue<pair<int, int>> q;
	v[x1][y1] = 1;
	q.push({ x1,y1 });
	while (!q.empty()) {
		auto it = q.front();
		q.pop();
		int i = it.first;
		int j = it.second;
		for (int k = 0; k < 8; k++)
		{
			int dx = i + x[k];
			int dy = j + y[k];

			if (dx >= 0 && dx < 8 && dy >=0 && dy<8 && v[dx][dy]==0) {
				v[dx][dy] = v[i][j] + 1;
				q.push({ dx,dy });
			}

		}
	}

}


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int t; cin >> t;
	while (t--) {

		string a, b;
		cin >> a >> b;
		int x1 = a[0] - 'a';
		int y1 = a[1] - '1';

		int x2 = b[0] - 'a';
		int y2 = b[1] - '1';

		vector<vector<int>> c(8, vector<int>(8, 0));

		BFS(c, x1, y1, x2, y2);

		cout << c[x2][y2] - 1 << endl;
	}

    return 0;
}
