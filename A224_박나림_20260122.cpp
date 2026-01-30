#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t t = time(NULL);
    tm *lt = localtime(&t);
    cout << lt->tm_year + 1900 << "-";
    if (lt->tm_mon + 1 < 10) cout << "0";
    cout << lt->tm_mon + 1 << "-";
    if (lt->tm_mday < 10) cout << "0";
    cout << lt->tm_mday;
    return 0;
}
