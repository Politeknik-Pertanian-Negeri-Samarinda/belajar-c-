#include <iostream>

#include <iomanip>

using namespace std;

int main() {

    // Array 2 dimensi untuk menyimpan data mahasiswa dalam bentuk table

    // Array 1 dimensi untuk menyimpan nama mahasiswa
    string nama[4] = {"Andi", "Budi", "Citra", "Dinda"};
    int pinjam[4][3];
    int jumlah[4] = {0, 0, 0, 0};
    int total = 0, maksimum = 0;

    // Menampilkan Judul Program
    cout << "=== PROGRAM MATRIKS RELASI PEMINJAMAN BUKU ===\n";
    cout << "Kategori Buku: [0] Matematika, [1] Pemrograman, [2] Basis Data\n";
    cout << "Masukkan angka 1 (meminjam) atau 0 (tidak meminjam):\n\n";

    // Input data matriks dari keyboard dengan validasi
    for (int i = 0; i < 4; i++) {
        cout << "--- Mahasiswa: " << nama[i] << " ---\n";
        // Loop untuk setiap kategori buku
        for (int j = 0; j < 3; j++) {
            string kategori = (j == 0) ? "Matematika" : (j == 1) ? "Pemrograman" : "Basis Data";
            // Looping untuk validasi input agar hanya menerima angka 0 atau 1
            do {
                // Meminta input dari pengguna untuk setiap kategori buku
                cout << "  - Meminjam buku " << kategori << " (0/1): ";
                cin >> pinjam[i][j];

                // Validasi agar hanya menerima angka 0 atau 1[cite: 3]
                if (pinjam[i][j] != 0 && pinjam[i][j] != 1) {
                    cout << "    [Error] Input tidak valid! Harap masukkan angka 0 atau 1 saja.\n";
                }
            // Looping hingga input valid (0 atau 1)
            } while (pinjam[i][j] != 0 && pinjam[i][j] != 1);
        }
        cout << "\n";
    }

    // Menampilkan Matriks dan Hasil Analisis
    cout << "\nNama\t\tM P B\tJumlah\n";
    cout << "------------------------------------------------\n";

    // Menghitung jumlah buku yang dipinjam oleh setiap mahasiswa dan menampilkan hasilnya
    for (int i = 0; i < 4; i++) {
        cout << nama[i] << "\t\t";
        for (int j = 0; j < 3; j++) {
            cout << pinjam[i][j] << "\t";
        }
        
        // Menghitung jumlah buku yang dipinjam oleh setiap mahasiswa
        jumlah[i] = 0;
        for (int j = 0; j < 3; j++) {
            jumlah[i] += pinjam[i][j];
        }
        cout << jumlah[i] << "\n";

        // Menghitung jumlah buku yang dipinjam oleh setiap mahasiswa
        if (jumlah[i] > maksimum) {
            maksimum = jumlah[i];
        }
        total += jumlah[i];
    }

    // Menampilkan total buku yang dipinjam dan maksimum buku yang dipinjam oleh mahasiswa
    cout << "------------------------------------------------\n";
    cout << "Total buku dipinjam: " << total << endl;
    cout << "Maksimum buku dipinjam: " << maksimum << endl;

    return 0;

}
