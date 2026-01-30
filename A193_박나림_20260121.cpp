#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = N / 4;
    for (int i = 0; i < cnt; i++) cout << "long ";
    cout << "int";
    return 0;
}
