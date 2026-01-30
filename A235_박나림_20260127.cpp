#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<string, int> cnt;
    for (int i = 0; i < N; i++) {
        string s;
        int x;
        cin >> s >> x;
        cnt[s] += x;
    }
    for (auto &p : cnt) {
        if (p.second == 5) {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
