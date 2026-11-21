#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Fungsi helper untuk mengecek apakah string valid sebagai angka (mendukung negatif)
bool isNumber(const string& str) {
    // Memeriksa apakah string kosong
    if (str.empty()) return false;
    size_t start = 0;
    // Memeriksa apakah karakter pertama adalah tanda minus atau plus
    if (str[0] == '+' || str[0] == '-') {
        // Memeriksa apakah string hanya memiliki satu karakter
        if (str.length() == 1) return false;
        start = 1;
    }
    // Memeriksa setiap karakter setelah tanda minus/plus untuk memastikan semuanya adalah digit
    for (size_t i = start; i < str.length(); ++i) {
        // Jika ada karakter yang bukan digit, maka string bukan angka
        if (!isdigit(str[i])) return false;
    }
    return true;
}

int main() {
    // Mengubah warna teks terminal menjadi hijau di awal
    cout << "\033[32m";

    char ulang;

    // Loop utama untuk menu program
    do {
        // Deklarasi variabel
        int a, b, c, d, pilihan;
        string inputStr;

        cout << "\n=== KALKULATOR KOMBINASI & ASSIGNMENT ===" << endl;

        // Validasi input nilai a
        while (true) {
            // Meminta input nilai a
            cout << "Masukkan nilai a: ";
            getline(cin, inputStr);
            // Cek apakah input kosong
            if (inputStr.empty()) {
                cout << "Peringatan: Harap masukkan input nilai!" << endl;
                continue;
            }
            // Cek apakah input valid
            if (isNumber(inputStr)) {
                stringstream(inputStr) >> a;
                break;
            } else {
                cout << "Input tidak valid! Harap masukkan angka." << endl;
            }
        }

        // Validasi input nilai b
        while (true) {
            cout << "Masukkan nilai b: ";
            getline(cin, inputStr);
            // Cek apakah input kosong
            if (inputStr.empty()) {
                cout << "Peringatan: Harap masukkan input nilai!" << endl;
                continue;
            }
            // Cek apakah input valid
            if (isNumber(inputStr)) {
                stringstream(inputStr) >> b;
                break;
            } else {
                cout << "Input tidak valid! Harap masukkan angka." << endl;
            }
        }

        // Validasi input nilai c (untuk opsi 1-5)
        while (true) {
            cout << "Masukkan nilai c: ";
            getline(cin, inputStr);
            // Cek apakah input kosong
            if (inputStr.empty()) {
                cout << "Peringatan: Harap masukkan input nilai!" << endl;
                continue;
            }
            // Cek apakah input valid
            if (isNumber(inputStr)) {
                stringstream(inputStr) >> c;
                break;
            } else {
                cout << "Input tidak valid! Harap masukkan angka." << endl;
            }
        }

        // Validasi input nilai d (untuk opsi 1-5)
        while (true) {
            cout << "Masukkan nilai d: ";
            getline(cin, inputStr);
            // Cek apakah input kosong
            if (inputStr.empty()) {
                cout << "Peringatan: Harap masukkan input nilai!" << endl;
                continue;
            }
            // Cek apakah input valid
            if (isNumber(inputStr)) {
                stringstream(inputStr) >> d;
                break;
            } else {
                cout << "Input tidak valid! Harap masukkan angka." << endl;
            }
        }

        // Menu Pilihan Kombinasi & Assignment Operasi Hitung
        cout << "\n--- PILIH MENU OPERASI ---" << endl;
        cout << "1. a + b - c - d" << endl;
        cout << "2. (a + b) - (c - d)" << endl;
        cout << "3. a * b + c * d" << endl;
        cout << "4. a / b * c / d" << endl;
        cout << "5. Tampilkan Format Lengkap (a + b - c - d)" << endl;
        cout << "6. Demo Assignment Operator (a += b, a -= b, dst) [Materi Papan Tulis]" << endl;

        // Validasi input pilihan menu (1-6)
        while (true) {
            cout << "Masukkan pilihan (1-6): ";
            getline(cin, inputStr);

            // Cek apakah input kosong
            if (inputStr.empty()) {
                cout << "Peringatan: Harap masukkan input pilihan!" << endl;
                continue;
            }

            // Cek apakah input valid
            if (isNumber(inputStr)) {
                stringstream(inputStr) >> pilihan;
                if (pilihan >= 1 && pilihan <= 6) {
                    break;
                }
            }
            cout << "Pilihan tidak valid! Pilih angka 1 sampai 6." << endl;
        }

        // Menampilkan hasil berdasarkan pilihan operasi
        cout << "\n--- HASIL PERHITUNGAN ---" << endl;
        // Melakukan operasi berdasarkan pilihan
        switch (pilihan) {
            case 1:
                cout << "Perhitungan 1: " << a + b - c - d << endl;
                break;
            case 2:
                cout << "Perhitungan 2: " << (a + b) - (c - d) << endl;
                break;
            case 3:
                cout << "Perhitungan 3: " << a * b + c * d << endl;
                break;
            case 4:
                if (b != 0 && d != 0) {
                    float hasil4 = (static_cast<float>(a) / b) * c / d;
                    cout << "Perhitungan 4: " << hasil4 << endl;
                } else {
                    cout << "Perhitungan 4: Tidak terhingga (terdapat pembagi bernilai 0)" << endl;
                }
                break;
            case 5:
                cout << a << " + " << b << " - " << c << " - " << d << " = " << (a + b - c - d) << endl;
                break;
            case 6: {
                // Fitur Baru Sesuai Papan Tulis (Assignment Operators)
                // Kita gunakan salinan nilai a (misal a_awal) agar tidak merusak variabel asli saat simulasi beruntun
                int temp_a = a;
                cout << "Nilai awal a = " << temp_a << ", b = " << b << endl;
                
                // Demonstrasi penggunaan operator assignment
                temp_a += b;
                cout << "a += b  -->  a = " << temp_a << endl;
                
                // Kita reset temp_a ke nilai awal a untuk demonstrasi berikutnya
                temp_a -= b;
                cout << "a -= b  -->  a = " << temp_a << endl;
                
                // Demonstrasi operator assignment lainnya
                temp_a *= b;
                cout << "a *= b  -->  a = " << temp_a << endl;
                
                // Demonstrasi operator pembagian dengan pengecekan pembagi
                if (b != 0) {
                    temp_a /= b;
                    cout << "a /= b  -->  a = " << temp_a << endl;
                } else {
                    cout << "a /= b  -->  Gagal (b bernilai 0)" << endl;
                }
                break;
            }
        }

        // Konfirmasi perulangan program
        cout << "\n----------------------------------------" << endl;
        cout << "Apakah Anda ingin menghitung lagi? (y/t): ";
        getline(cin, inputStr);
        
        ulang = inputStr.empty() ? 't' : inputStr[0];

    } while (ulang == 'y' || ulang == 'Y');

    // Mengembalikan warna terminal ke default saat program keluar
    cout << "\033[0m";
    cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;

    return 0;
}
