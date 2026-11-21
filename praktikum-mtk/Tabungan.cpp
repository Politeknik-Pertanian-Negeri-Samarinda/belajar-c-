#include <iostream>
using namespace std;

int main() {
    int tabungan = 20000;
    int penambahan = 7000;
    
    cout << "--- Penyelesaian Soal 1: Tabungan Mahasiswa ---" << endl;
    for (int hari = 1; hari <= 7; hari++) {
        cout << "Hari ke-" << hari << " = Rp " << tabungan << endl;
        if (hari < 7) {
            tabungan += penambahan;
        }
    }
    return 0;
}