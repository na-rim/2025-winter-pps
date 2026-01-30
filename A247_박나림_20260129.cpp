#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) {
        string s;
        cin >> s;

        int i = (int)s.size() - 1;
        int carry = 1;
        while (i >= 0 && carry) {
            int d = (s[i] - '0') + carry;
            if (d == 10) {
                s[i] = '1';
                carry = 1;
            } else {
                s[i] = char('0' + d);
                carry = 0;
            }
            i--;
        }
        if (carry) s = "1" + s;

        cout << s << "\n";
    }
    return 0;
}
