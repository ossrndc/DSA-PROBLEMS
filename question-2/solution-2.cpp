#include <iostream>
using namespace std;

int count_trailing_zeroes(int n) {
    int zeroes = 0;
    int i = 5;
    while (n / i > 0) {
        zeroes += n / i;
        i *= 5;
    }
    return zeroes;
}

int main() {
    int t;
    cin >> t; // Input number of test cases
    
    while (t>0) {
        int n;
        cin >> n; // Input number n
        // Output
        cout << count_trailing_zeroes(n) << endl;
        t--;
    }

    return 0;
}
