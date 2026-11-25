#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Введіть довжини трьох сторін: ";
    cin >> a >> b >> c;

    double p = (a + b + c) / 2.0;

    if (a <= 0 || b <= 0 || c <= 0 ||
        a + b <= c || a + c <= b || b + c <= a) {
        cout << "Такі сторони не утворюють трикутник.\n";
        return 0;
    }

    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Площа трикутника: " << area << '\n';

    return 0;
}