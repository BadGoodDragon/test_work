#include <iostream>

using namespace std;

int max_num = -1;

void f(unsigned long long n) {

    if (n == 0) {
        return;
    }

    int num = n % 10;
    if (max_num < num) {
        max_num = num;
    } 
    f(n / 10);
}

int main() {
    unsigned long long n;
    cin >> n;
    if (n == 0) {
        cout << n;
        return 0;
    }
    f(n);
    cout << max_num;
}