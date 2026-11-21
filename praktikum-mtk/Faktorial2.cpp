#include <iostream>
using namespace std;

unsigned long long faktorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * faktorial(n - 1);
}

int main() {
    int n = 6;
    cout << "--- Penyelesaian Soal 6: Faktorial Urutan Tugas ---" << endl;
    cout << "Jumlah kemungkinan urutan dari " << n << " tugas (" << n << "!) = " << faktorial(n) << endl;
    return 0;
}
