#include <iostream>
using namespace std;

int main() {
    int stok = 150;
    int keluar = 12;
    
    cout << "--- Penyelesaian Soal 2: Stok Barang ---" << endl;
    for (int hari = 1; hari <= 8; hari++) {
        cout << "Hari ke-" << hari << " = " << stok << " unit" << endl;
        if (hari < 8) {
            stok -= keluar;
        }
    }
    return 0;
}