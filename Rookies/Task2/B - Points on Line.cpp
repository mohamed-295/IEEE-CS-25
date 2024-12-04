#include <iostream>
#include <string>
#include <vector>
#include<algorithm>
using namespace std;

int main() {
    int n,d;
    cin >> n>>d;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    
    long long ans = 0;
         for (int i = 0; i < n; i++)
         {
             int last = upper_bound(v.begin(), v.end(),v[i] + d) - v.begin();
             
             long long ctn = last - i - 1;
             
             if (ctn >= 2) {
                 //then the number of points from i to last is 3 points or more then we will do compination of 3 to ctn and add it to our answer 

                  ans += (ctn * (ctn - 1)) / 2;
             }

         }        
         cout <<ans<<endl;

    
    return 0;
}
