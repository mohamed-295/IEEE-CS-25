#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    using namespace std;
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int> v(n);
   
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int t = INT_MAX;
    for (int i = 0; i < n-1; i++)
    {
        if (s[i] == 'R' &&s[i + 1] == 'L') {
            t = min(t ,(v[i+1]-v[i])/2);
        }
    }
    
    cout << (t == INT_MAX ? -1 : t) << endl;

    return 0;
}
