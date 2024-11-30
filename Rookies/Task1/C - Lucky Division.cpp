#include <iostream>
#include <string>
#include <vector>

using namespace std;
bool isLucky(int n) {
    
    while (n != 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7) {
            return false;
        }
        n /= 10;


    }
    return true;
}
int main()
{
    using namespace std;
    int n;
    cin >> n;
    if (isLucky(n)) {
        cout << "YES" << endl;
        return 0;
    }
    else {
        for (int i = 4; i < n; i++)
        {
            if (n % i == 0 && isLucky(i)) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }


    cout << "NO" << endl;
    return 0;
}
