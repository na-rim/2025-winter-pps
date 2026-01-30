#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N, M;
    cin >> N >> M;
    vector<int> A(N), B(M);
    for (int i = 0; i < N; i++) cin >> A[i];
    for (int i = 0; i < M; i++) cin >> B[i];

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int cntA = 0, cntB = 0;

    int last = -1000000000;
    for (int t : A) {
        if (t - last >= 100) {
            cntA++;
            last = t;
        }
    }

    last = -1000000000;
    for (int t : B) {
        if (t - last >= 360) {
            cntB++;
            last = t;
        }
    }

    cout << cntA << " " << cntB;
    return 0;
}
