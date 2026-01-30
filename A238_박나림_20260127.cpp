#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int M, N;
    cin >> M >> N;
    vector<bool> prime(N + 1, true);
    if (N >= 0) prime[0] = false;
    if (N >= 1) prime[1] = false;
    for (int i = 2; i * i <= N; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= N; j += i) {
                prime[j] = false;
            }
        }
    }
    for (int i = M; i <= N; i++) {
        if (prime[i]) cout << i << "\n";
    }
    return 0;
}
