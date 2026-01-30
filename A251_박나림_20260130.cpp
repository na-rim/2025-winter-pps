#include <iostream>
using namespace std;

int main() {
    long long N;
    long long U, L;
    cin >> N >> U >> L;

    bool cond1 = (N >= 1000);
    bool cond2 = (U >= 8000 || L >= 260);

    if (cond1 && cond2) cout << "Very Good";
    else if (cond1) cout << "Good";
    else cout << "Bad";

    return 0;
}
