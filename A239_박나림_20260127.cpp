#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    int a, b;
    cin >> a >> b;
    int g = gcd(a, b);
    cout << g << "\n" << a / g * b;
    return 0;
}
