#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int n, k;
    cin >> n >> k;


    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

    }

    sort(v.begin(), v.end());

    int l = 0, r = 0, ctn = 0;
    while (r < n) {
        if (v[r] - v[l] > k) {
            l++;
        }

        if (v[r] - v[l] < k) {
            r++;
        }

        if (v[r] - v[l] == k) {
            ctn++;
            r++;
        }
    }

    cout << ctn << endl;




    return 0;
}
