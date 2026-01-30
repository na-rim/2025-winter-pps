#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int cnt[2][7] = {0};
    for (int i = 0; i < N; i++) {
        int S, Y;
        cin >> S >> Y;
        cnt[S][Y]++;
    }
    int rooms = 0;
    for (int s = 0; s < 2; s++) {
        for (int y = 1; y <= 6; y++) {
            rooms += (cnt[s][y] + K - 1) / K;
        }
    }
    cout << rooms;
    return 0;
}
