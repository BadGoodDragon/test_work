#include <iostream>

using namespace std;

int sum(int a, int b) {
    if (b > 0) {
        return sum(a + 1, b - 1);
    } else if (b < 0) {
        return sum(a - 1, b + 1);
    } else {
        return a;
    }
}

int main() {
    int a;
    int b;
    cin >> a >> b;
    cout << sum(a, b);
}