#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long N;
    cin >> N;

    vector<char> vis(600000, 0);
    long long a = 0;

    for (long long i = 1; i <= N; i++) {
        if (a >= (long long)vis.size()) vis.resize(a + 1, 0);
        vis[a] = 1;

        long long b = a - i;
        bool used = false;
        if (b >= 0 && b < (long long)vis.size() && vis[b]) used = true;
        if (b < 0 || used) b = a + i;

        if (b >= (long long)vis.size()) vis.resize(b + 1, 0);
        a = b;
    }

    cout << a;
    return 0;
}
