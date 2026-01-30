#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    long long minX = 0, minY = 0, maxX = 0, maxY = 0;
    for (int i = 0; i < N; i++) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (i == 0) {
            minX = a; minY = b; maxX = c; maxY = d;
        } else {
            if (a < minX) minX = a;
            if (b < minY) minY = b;
            if (c > maxX) maxX = c;
            if (d > maxY) maxY = d;
        }
        long long per = 2 * ((maxX - minX) + (maxY - minY));
        cout << per << "\n";
    }
    return 0;
}
