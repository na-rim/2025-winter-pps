#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> a(N);
    for (int i = 0; i < N; i++) a[i] = i + 1;
    for (int k = 0; k < M; k++) {
        int i, j;
        cin >> i >> j;
        reverse(a.begin() + (i - 1), a.begin() + j);
    }
    for (int i = 0; i < N; i++) {
        if (i) cout << " ";
        cout << a[i];
    }
    return 0;
}
