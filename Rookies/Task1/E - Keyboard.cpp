#include <iostream>
#include <string>

using namespace std;

int main() {
    char c;
    cin >> c;

    string s = "qwertyuiopasdfghjkl;zxcvbnm,./";
    int mv = (c == 'R' ? -1 : 1);
    string in;
    cin >> in;

    string ans = "";
    for (int i = 0; i < in.size(); i++) {
        int newIndex = s.find(in[i]) + mv;
        ans += s[newIndex];
    }

    cout << ans << endl;
    return 0;
}
