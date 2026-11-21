#include <iostream>
using namespace std;

int main() {
    int penggunaBaru = 30;
    int penambahan = 15;
    int totalKumulatif = 0;
    
    cout << "--- Penyelesaian Soal 4: Pengguna Aplikasi ---" << endl;
    for (int minggu = 1; minggu <= 7; minggu++) {
        cout << "Minggu ke-" << minggu << " = " << penggunaBaru << " pengguna baru" << endl;
        totalKumulatif += penggunaBaru;
        if (minggu < 7) {
            penggunaBaru += penambahan;
        }
    }
    cout << "Total pengguna baru selama 7 minggu = " << totalKumulatif << endl;
    return 0;
}