#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int l = 0, r = 0, ctn=0;
    /*
    * 
    * 
      1 2 10 12 15 17
    
    */

    while (r < n) {
        if (v[r] - v[l] <= 5) {
            ctn = max(ctn, r-l+1);
            r++;
           
        }
        else {
            l++;
            
        }
    }
    cout << ctn << endl;


    return 0;
}
