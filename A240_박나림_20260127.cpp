#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        long long A, B;
        cin >> A >> B;
        long long g = gcd(A, B);
        cout << A / g * B << "\n";
    }
    return 0;
}
