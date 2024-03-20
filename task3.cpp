#include <iostream>

using namespace std;

long long pow(long long a, long long n) {
    if (n == 1) {
        return a;
    } else if (n % 2 == 0) {
        return pow(a*a, n/2);
    } else if (n % 2 == 1) {
        return a*pow(a, n-1);
    }
}

int main() {
    long long a;
    long long n;

    cin >> a >> n;
    cout << pow(a, n);
}