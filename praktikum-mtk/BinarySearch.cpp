#include <iostream>
using namespace std;

int main() {

    cout << "Nama: Alpian" << endl;
    cout << "NIM: H263600007" << endl;

    cout << "=== PROGRAM BINARY SEARCH (9 DATA) ===" << endl;

    int nilai[9] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int cari, kiri = 0, kanan = 8;
    int posisi = -1, jumlahCek = 0;
    
    cout << "Masukkan nilai yang dicari: ";
    cin >> cari;
    
    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;
        jumlahCek++;
        
        if (nilai[tengah] == cari) {
            posisi = tengah;
            break;
        } else if (cari < nilai[tengah]) {
            kanan = tengah - 1;
        } else {
            kiri = tengah + 1;
        }
    }
    
    if (posisi != -1)
        cout << "Nilai ditemukan pada urutan ke-" << posisi + 1 << endl;
    else
        cout << "Nilai tidak ditemukan" << endl;
        
    cout << "Jumlah pemeriksaan: " << jumlahCek << endl;
    
    return 0;
}