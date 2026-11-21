#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama[4] = {"Andi", "Budi", "Citra", "Dinda"};
    int pinjam[4][3];
    int jumlah[4] = {0, 0, 0, 0};
    int total = 0, maksimum = 0;

    cout << "=== PROGRAM MATRIKS RELASI PEMINJAMAN BUKU ===\n";
    cout << "Kategori Buku: [0] Matematika, [1] Pemrograman, [2] Basis Data\n";
    cout << "Masukkan angka 1 (meminjam) atau 0 (tidak meminjam):\n\n";

    // Input data matriks dari keyboard dengan validasi
    for (int i = 0; i < 4; i++) {
        cout << "--- Mahasiswa: " << nama[i] << " ---\n";
        for (int j = 0; j < 3; j++) {
            string kategori = (j == 0) ? "Matematika" : (j == 1) ? "Pemrograman" : "Basis Data";
            do {
                cout << "  - Meminjam buku " << kategori << " (0/1): ";
                cin >> pinjam[i][j];
                
                // Validasi agar hanya menerima angka 0 atau 1[cite: 3]
                if (pinjam[i][j] != 0 && pinjam[i][j] != 1) {
                    cout << "    [Error] Input tidak valid! Harap masukkan angka 0 atau 1 saja.\n";
                }
            } while (pinjam[i][j] != 0 && pinjam[i][j] != 1);
        }
        cout << "\n";
    }

    // Menampilkan Matriks dan Hasil Analisis
    cout << "\nNama\t\tM P B\tJumlah\n";
    cout << "---------------------------------\n";

    for (int i = 0; i < 4; i++) {
        cout << nama[i] << "\t\t";
        for (int j = 0; j < 3; j++) {
            cout << pinjam[i][j] << " ";
            jumlah[i] += pinjam[i][j]; // Menghitung total kategori per mahasiswa
            total += pinjam[i][j];     // Menghitung total seluruh hubungan
        }
        cout << "\t" << jumlah[i] << "\n";

        // Mencari jumlah kategori terbanyak
        if (jumlah[i] > maksimum) {
            maksimum = jumlah[i];
        }
    }

    cout << "---------------------------------\n";
    cout << "Total hubungan peminjaman: " << total << "\n";
    
    // Menampilkan peminjam terbanyak (mendukung kondisi seri/tie)
    cout << "Peminjam kategori terbanyak: ";
    for (int i = 0; i < 4; i++) {
        if (jumlah[i] == maksimum) {
            cout << nama[i] << " ";
        }
    }
    cout << "(" << maksimum << " kategori)\n";

    return 0;
}