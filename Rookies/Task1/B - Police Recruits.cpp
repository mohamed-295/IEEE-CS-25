#include <iostream>
#include <string>
#include <vector>

int main()
{
    using namespace std;
    int n;
    cin >> n;
    vector<int> v(n);
    int s = 0;
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s += x;
        if (s < 0)
            ans = max(ans, -s);
    }
    cout << ans << endl;
    return 0;
    
}