#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

string lowerStr(const string& s) {
    string t = s;
    for (char &c : t) {
        if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
    }
    return t;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int scen = 1;
    while (cin >> n) {
        if (n == 0) break;
        cin.ignore();
        vector<string> v(n);
        for (int i = 0; i < n; i++) getline(cin, v[i]);

        sort(v.begin(), v.end(), [](const string& a, const string& b) {
            return lowerStr(a) < lowerStr(b);
        });

        cout << "Scenario #" << scen++ << ":\n";
        for (auto &s : v) cout << s << "\n";
    }
    return 0;
}
