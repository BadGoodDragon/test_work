#include <iostream>
using namespace std;

void f(int n) {
    int m = 0;
    cin >> m;
    if (n > 1) {
        f(n - 1);
    }
    if (m % 2 == 0) {
        cout << m << " ";
    }
}

int main() {
    int n;
    cin >> n;
    f(n);
}