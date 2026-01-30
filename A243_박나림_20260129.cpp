#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    string S;
    cin >> n >> S;

    vector<int> p, c;
    for (int i = 0; i < (int)S.size(); i++) {
        if (S[i] == 'P') p.push_back(i);
        else if (S[i] == 'C') c.push_back(i);
    }

    int k = min(p.size(), c.size());
    for (int i = 0; i < k; i++) {
        char tmp = S[p[i]];
        S[p[i]] = S[c[i]];
        S[c[i]] = tmp;
    }

    cout << S;
    return 0;
}
