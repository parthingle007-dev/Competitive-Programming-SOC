#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int dots = 0;
        int cnt = 0;
        bool hasThree = false;

        for (char c : s) {
            if (c == '.') {
                dots++;
                cnt++;
                if (cnt >= 3)
                    hasThree = true;
            } else {
                cnt = 0;
            }
        }

        if (hasThree)
            cout << 2 << '\n';
        else
            cout << dots << '\n';
    }

    return 0;
}