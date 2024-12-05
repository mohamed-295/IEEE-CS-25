#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n,t;
    cin >> n>>t;
    vector<int> v(n);
   
    for (int i = 0; i < n; i++ )    cin >> v[i];
    
    int ans = 0, r = 0, l = 0, ct = 0;
    while(r<n){
        ct += v[r++];
        if (ct  > t) {
            ct -= v[l++];
        }
        ans = max(ans, r - l );
    }
    
    
   
    cout <<ans<<endl;

    
    return 0;
}