#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int A = -1, B = -1, ans;

    for (int x = 1; x <= 9; x++) {
        cout << "? A " << x << endl;
        if (!(cin >> ans)) return 0;
        if (ans == 1) { A = x; break; }
    }

    for (int x = 1; x <= 9; x++) {
        cout << "? B " << x << endl;
        if (!(cin >> ans)) return 0;
        if (ans == 1) { B = x; break; }
    }

    cout << "! " << (A + B) << endl;
    return 0;
}
