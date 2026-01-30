#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int c = 0;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x == 1) c++;
    }
    if (c > N / 2) cout << "Junhee is cute!";
    else cout << "Junhee is not cute!";
    return 0;
}
