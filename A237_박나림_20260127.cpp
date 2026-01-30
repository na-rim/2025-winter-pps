#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string a, b;
        cin >> a >> b;
        int ca[26] = {0}, cb[26] = {0};
        for (char ch : a) ca[ch - 'a']++;
        for (char ch : b) cb[ch - 'a']++;
        bool ok = true;
        for (int i = 0; i < 26; i++) {
            if (ca[i] != cb[i]) {
                ok = false;
                break;
            }
        }
        cout << (ok ? "Possible" : "Impossible") << "\n";
    }
    return 0;
}
