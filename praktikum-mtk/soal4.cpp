#include <iostream>
using namespace std;

unsigned long long faktorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int n = 6;
    cout << "--- Penyelesaian Soal 4 ---" << endl;
    cout << "Banyak urutan pelaksanaan 6 tugas (" << n << "!) = " << faktorial(n) << endl;
    return 0;
}