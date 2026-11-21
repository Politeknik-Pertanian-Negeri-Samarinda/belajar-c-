#include <iostream>
using namespace std;

int main() {
    int nilaiAwal, beda, jumlahSuku;
    int totalJumlah = 0;
    
    cout << "--- Program Barisan Aritmetika (Soal 5) ---" << endl;
    cout << "Masukkan nilai awal: ";
    cin >> nilaiAwal;
    cout << "Masukkan beda/selisih: ";
    cin >> beda;
    cout << "Masukkan jumlah suku yang ingin ditampilkan: ";
    cin >> jumlahSuku;
    
    cout << "\nSuku-suku barisan aritmetika:" << endl;
    int sukuAktif = nilaiAwal;
    
    for (int i = 1; i <= jumlahSuku; i++) {
        cout << "Suku ke-" << i << " = " << sukuAktif << endl;
        totalJumlah += sukuAktif;
        sukuAktif += beda; // Aturan rekursif aritmetika: a(n) = a(n-1) + beda[cite: 1]
    }
    
    cout << "\nJumlah keseluruhan (sum) dari seluruh suku adalah: " << totalJumlah << endl;
    
    return 0;
}