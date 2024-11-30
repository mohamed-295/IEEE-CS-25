#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i <n; i++)
    {
        cin >> v[i];
    }
    int  min = INT_MAX, max = 0;
    int  min_index = 0, max_index = 0;
    for (int i = 0; i < n; i++)
    {
        if (min >= v[i]) {
            min = v[i];
            min_index = i;
        }
        if (max < v[i]) {
            max = v[i];
            max_index = i;
        }
    }
    int ans = max_index - min_index + n - 1;
    if (min_index < max_index) {
        cout <<ans-1 <<endl;

    }
    else {
        cout << ans << endl;

    }

    return 0;
}
