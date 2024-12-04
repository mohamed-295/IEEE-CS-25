#include <iostream>
#include <vector>
using namespace std;

int check(int mid, int k, int n) {
    int ans = mid;
    int tot = mid;
    for (int i = 1; i <= 30 ; i++)
    {
        tot /= k;
        if (tot <= 0 || ans >= n) break;
        ans += tot;
    }
    return ans;
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    /*
    
    let n = 7 , k = 2 
     
    7   6 + 6/2    5 + 5/2    4 +4/2 + 4/4     3 +3/2 + 3/4       2            1 

     t      t        t             t                f             f            f



     then ans = 4 



    we will start from center and check
    if >= n we will change the right value to mid -1  we don't need the mid and the values bigger than it  and assign ans 
    if not  we will change left value to mid +1 as we don't need the mid and the values smaller than it
    
    
    in the check method n is equal to 1e9   then the max value of i makes n/pow(k,i) =0 is log(1e9)/log(2) =30 
    
    */




    int n,k;
    cin >> n>>k;
    
   
    int l = 0, r = n, ans = 0;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid, k, n) >= n) {
            ans = mid;
            r = mid - 1;
        }
        else {
            l = mid + 1;
        }

    }
   
    cout <<ans<<endl;

    
    return 0;
}
