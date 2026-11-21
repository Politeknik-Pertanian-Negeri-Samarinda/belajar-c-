#include <iostream>
using namespace std;

int main() {
    int a = 12; // Pengguna minggu pertama
    int beda = 5; // Penambahan tiap minggu
    int total = 0;
    
    cout << "--- Penyelesaian Soal 1 ---" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << "Minggu ke-" << i << ": " << a << endl;
        total += a;
        a += beda;
    }
    cout << "Total pengguna baru selama 5 minggu: " << total << endl;
    return 0;
}
