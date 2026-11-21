#include <iostream>
using namespace std;

int main() {

    cout << "Nama: Alpian" << endl;
    cout << "NIM: H263600007" << endl;

    cout << "=== PROGRAM LINEAR SEARCH (6 DATA) ===" << endl;

    int nilai[6] = {75, 80, 65, 90, 85, 70};
    int cari, posisi = -1, jumlahCek = 0;
    
    cout << "Masukkan nilai yang dicari: ";
    cin >> cari;
    
    for (int i = 0; i < 6; i++) {
        jumlahCek++;
        if (nilai[i] == cari) {
            posisi = i;
            break;
        }
    }
    
    if (posisi != -1)
        cout << "Nilai ditemukan pada urutan ke-" << posisi + 1 << endl;
    else
        cout << "Nilai tidak ditemukan" << endl;
        
    cout << "Jumlah pemeriksaan: " << jumlahCek << endl;
    
    return 0;
}
