#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n,m;
    cin >> n>>m;
    vector<int> c(n);
    vector<int> t(m);
    for (int i = 0; i < n; i++ )    cin >> c[i];
    
    for (int i = 0; i < m; i++)     cin >> t[i];
    
    
   int ans = 0;
         for (int i = 0; i < n; i++)
         {
             int rightT = lower_bound(t.begin(), t.end(),c[i]) - t.begin();
             int leftT = rightT - 1;
             int minDistance = INT_MAX;
             
             if (rightT < m) {
                 minDistance = min(minDistance, t[rightT] - c[i]);
             }
             if (leftT>=0) {
                 minDistance = min(minDistance,   c[i]- t[leftT]);
             }
             ans = max(ans, minDistance);

         }        
         cout <<ans<<endl;

    
    return 0;
}
