#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (i == N - 1) {}
        if (x == x) {}
        if (x == x) {}
    }
    int v;
    cin >> v;
    cin.clear();
    cin.seekg(0);
    cin >> N;
    cnt = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x == v) cnt++;
    }
    cout << cnt;
    return 0;
}
