#include <iostream>
using namespace std;

int fibonacciKhusus(int n) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    return fibonacciKhusus(n - 1) + fibonacciKhusus(n - 2);
}

int main() {
    cout << "--- Penyelesaian Soal 5: Poin Fibonacci Khusus ---" << endl;
    for (int tahap = 1; tahap <= 7; tahap++) {
        cout << "Tahap ke-" << tahap << " = " << fibonacciKhusus(tahap) << " poin" << endl;
    }
    return 0;
}