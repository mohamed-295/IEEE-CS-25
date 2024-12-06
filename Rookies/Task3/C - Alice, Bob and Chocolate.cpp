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
    int t1 = 0,t2=0;
    int l = 0 , r=n-1,a=0,b=0;
    while (l <= r) {
        if (t1<=t2) {
            t1 += v[l];
            l++;
            a++;

        }
        else {
            t2 += v[r];
            r--;
            b++;
        }
    }
    
    cout << a <<" " << b << endl;


    return 0;
}
