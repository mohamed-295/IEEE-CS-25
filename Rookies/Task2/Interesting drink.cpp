#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        
        int ans = upper_bound(v.begin(), v.end(), x)-v.begin();
        cout << ans << endl; 

    }

    
    return 0;
}
