#include <iostream>

using namespace std;

long long fastExponentiation(long long base, long long exponent) {
    if (exponent == 0) {
        return 1;
    }

    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result *= base;
        }
        base *= base;
        exponent /= 2;
    }

    return result;
}

int main() {
    long long base, exponent;

    cout << "Wprowadź numer bazowy: ";
    cin >> base;

    cout << "Wprowadź potęge: ";
    cin >> exponent;

    long long result = fastExponentiation(base, exponent);

    cout << "Wynik: " << result << endl;

    return 0;
}
