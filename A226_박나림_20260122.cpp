#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x < 2) continue;
        bool prime = true;
        for (int j = 2; j * j <= x; j++) {
            if (x % j == 0) {
                prime = false;
                break;
            }
        }
        if (prime) cnt++;
    }
    cout << cnt;
    return 0;
}
