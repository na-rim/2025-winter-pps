#include <iostream>
using namespace std;

int main() {
    double h, w;
    cin >> h >> w;
    double bmi = w / (h * h);
    if (bmi > 25.0) cout << "Overweight";
    else if (bmi >= 18.5) cout << "Normal weight";
    else cout << "Underweight";
    return 0;
}
