#include <iostream>
using namespace std;

int main() {

    cout << "Nama: Alpian" << endl;
    cout << "NIM: H263600007" << endl;

    cout << "=== PROGRAM LINEAR SEARCH (10 DATA) ===" << endl;

    int nilai[10];
    int cari, posisi = -1, jumlahCek = 0;
    
    cout << "=== PROGRAM LINEAR SEARCH (10 DATA) ===" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "Masukkan nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }
    
    cout << "\nMasukkan nilai yang ingin dicari: ";
    cin >> cari;
    
    for (int i = 0; i < 10; i++) {
        jumlahCek++;
        if (nilai[i] == cari) {
            posisi = i;
            break;
        }
    }
    
    cout << "\n----------------------------------------" << endl;
    if (posisi != -1)
        cout << "Status : Nilai ditemukan pada urutan ke-" << posisi + 1 << endl;
    else
        cout << "Status : Nilai tidak ditemukan" << endl;
        
    cout << "Jumlah pemeriksaan : " << jumlahCek << endl;
    cout << "----------------------------------------" << endl;
    
    return 0;
}