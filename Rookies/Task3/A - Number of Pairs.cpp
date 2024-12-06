#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t;
    cin >> t;

    while (t--) {
        int n, mn, mx;
        cin >> n >> mn >> mx;
        vector<long long> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

        }


        sort(v.begin(), v.end());
            
       
        long long l = 0, r =  0, ctn = 0;
        for (int i = 0; i < n; i++) {
            l = mn - v[i];
            r = mx - v[i];
            int firstInRange = lower_bound(v.begin() + i+1, v.end(), l) - v.begin();
            int lastInRange = upper_bound(v.begin() + i+1, v.end(), r) - v.begin();
            ctn += lastInRange - firstInRange;

        }

        cout << ctn << endl;
        
    }

    /*
       5 5 8
       5 1 2 4 3

    
       1 2 3 4 5

       1---

       l=4
       r=7

       firstInRange = 3
       lastInrange = 5

       ctn+=2

       2------
       l=3
       r=6

       firstInRange = 2
       lastInrange = 5

       ctn+=3

       3------
       l=3
       r=5

       firstInRange = 1
       lastInrange = 4

       ctn+=2

       then 0 0

       */



    return 0;
}
