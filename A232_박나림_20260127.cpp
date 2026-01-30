#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    double sum = 0;
    double M = 0;
    for (int i = 0; i < N; i++) {
        double x;
        cin >> x;
        if (x > M) M = x;
        sum += x;
    }
    cout << (sum / M * 100) / N;
    return 0;
}
