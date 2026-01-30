#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<long long> A(N), B(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < N; i++) cin >> B[i];

    if (A == B) {
        cout << 1;
        return 0;
    }

    for (int last = N - 1; last >= 1; last--) {
        int idx = 0;
        for (int i = 1; i <= last; i++) {
            if (A[i] > A[idx]) idx = i;
        }
        if (idx != last) {
            long long tmp = A[idx];
            A[idx] = A[last];
            A[last] = tmp;
            if (A == B) {
                cout << 1;
                return 0;
            }
        }
    }

    cout << 0;
    return 0;
}
