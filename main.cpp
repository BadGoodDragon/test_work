#include <iostream>
#include <string>
#include <chrono>
using namespace std;

char convert(char c) {
    if (c == 'A') return 'C';
    if (c == 'C') return 'G';
    if (c == 'G') return 'T';
    if (c == 'T') return 'A';
}

int main() {
    cout << "Start" << endl;
    string opt = "ACGT";
    string s = "";
    string s_last = "";
    int len_str = 15;

    auto start = std::chrono::high_resolution_clock::now();


    for (int i = 0; i < len_str; i++) {
        s += opt[0];
    }
    for (int i = 0; i < len_str; i++) {
        s_last += opt[opt.size() - 1];
    }
    int pos = 0;
    int counter = 1;
    while (s != s_last) {
        counter++;
        bool change_next = true;
        for (int i = 0; i < len_str; i++) {
            if (change_next) {
                if (s[i] == opt[opt.size() - 1]) {
                    s[i] = convert(s[i]);
                    change_next = true;
                } else {
                    s[i] = convert(s[i]);
                    break;
                }
            }
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    cout << "Number of generated k-mers: " << counter << endl;
    cout << "Time: " << duration.count() << " ns" << endl;
    cout << "Finish!" << endl;
}

