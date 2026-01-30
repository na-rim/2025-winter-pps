#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    string A, B;
    cin >> A >> B;

    vector<int> a(N), b(M);
    for (int i = 0; i < N; i++) a[i] = A[N - 1 - i] - '0';
    for (int i = 0; i < M; i++) b[i] = B[M - 1 - i] - '0';

    vector<int> res(N + M, 0);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            res[i + j] += a[i] * b[j];
        }
    }

    for (int i = 0; i < N + M - 1; i++) {
        res[i + 1] += res[i] / 10;
        res[i] %= 10;
    }

    int idx = N + M - 1;
    while (idx > 0 && res[idx] == 0) idx--;

    for (int i = idx; i >= 0; i--) cout << res[i];
    return 0;
}
