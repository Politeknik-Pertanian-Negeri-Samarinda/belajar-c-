#include <iostream> // Header file untuk operasi input/output
#include <string> // Header file untuk operasi string
using namespace std; // Menggunakan namespace standar

int main() {
    // Mengubah warna teks output menjadi hijau (ANSI escape code: \033[32m)
    cout << "\033[32m";

    cout << "===========================\n";
    cout << "     INPUT INFORMASI DIRI  \n";
    cout << "===========================\n";

    // Deklarasi variabel tanpa nilai awal (akan diisi lewat cin)
    string nama;
    int umur;
    float tinggi;
    double berat;
    char inisial;
    bool mahasiswa;

    // Proses Input menggunakan cin
    cout << "Masukkan Nama\t: ";
    getline(cin, nama); // Menggunakan getline agar bisa membaca spasi pada nama

    // Meminta input umur, tinggi, berat, inisial, dan status mahasiswa
    cout << "Masukkan Umur\t: ";
    // Memastikan input umur adalah integer
    cin >> umur;

    // Meminta input tinggi, berat, inisial, dan status mahasiswa
    cout << "Masukkan Tinggi\t: ";
    // Memastikan input tinggi adalah float
    cin >> tinggi;

    // Memastikan input berat adalah double
    cout << "Masukkan Berat\t: ";
    // Memastikan input berat adalah double
    cin >> berat;

    // Memastikan input inisial adalah karakter tunggal
    cout << "Masukkan Inisial\t: ";
    // Memastikan input inisial adalah karakter tunggal
    cin >> inisial;

    // Memastikan input mahasiswa adalah boolean (1 untuk Ya, 0 untuk Tidak)
    cout << "Mahasiswa (1=Ya, 0=Tidak): ";
    // Memastikan input mahasiswa adalah boolean (1 untuk Ya, 0 untuk Tidak)
    cin >> mahasiswa;

    // Bagian Output
    cout << "\n===========================\n";
    cout << "     DATA INFORMASI DIRI   \n";
    cout << "===========================\n";

    // Menampilkan kembali data yang telah diinput
    cout << "Nama\t: " << nama << "\n";
    cout << "Umur\t: " << umur << "\n";
    cout << "Tinggi\t: " << tinggi << "\n";
    cout << "Berat\t: " << berat << "\n";
    cout << "Inisial\t: " << inisial << "\n";
    cout << "Mahasiswa\t: " << mahasiswa << "\n";

    cout << "===========================\n";

    // Mereset warna terminal kembali ke default
    cout << "\033[0m";

    return 0; // Status keluar
}
