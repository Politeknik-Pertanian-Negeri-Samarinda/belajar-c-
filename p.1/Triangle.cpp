#include <iostream>

using namespace std;

int main() {
    // Mengubah warna teks terminal menjadi hijau
    cout << "\033[32m";

    // Segitiga
    string nama = "ALPIAN";
    int panjang = nama.length();

    cout << "=== POLA NAMA ALPIAN ===" << endl;

    // Perulangan untuk mencetak baris segitiga dari indeks 0 sampai panjang - 1
    for (int i = 0; i < panjang; i++) {
        // Perulangan untuk mencetak karakter dari indeks 0 sampai i
        for (int j = 0; j <= i; j++) {
            cout << nama[j];
            // Menambahkan spasi di antara huruf agar terlihat seperti contoh
            if (j < i) {
                cout << " ";
            }
        }
        // Menambahkan baris baru setelah setiap baris selesai dicetak
        cout << endl;
    }

    cout << "\n";

    // Kotak
    // output A L P I A N
    //        A L P I A N
    //        A L P I A N
    //        A L P I A N
    //        A L P I A N
    // Algoritma:
    // 1. Perulangan untuk mencetak baris
    // 2. Perulangan untuk mencetak karakter dari indeks 0 sampai i
    // 3. Menambahkan spasi di antara huruf agar terlihat seperti contoh

    // Mengembalikan warna terminal ke default sebelum program selesai
    cout << "\033[0m";

    // Mengubah warna teks terminal menjadi merah
    cout << "\033[31m";

    // Segitiga Terbalik
    cout << "=== POLA NAMA ALPIAN ===" << endl;

    // Perulangan untuk mencetak baris
    for (int i = panjang - 1; i >= 0; i--) {
        // Perulangan untuk mencetak karakter dari indeks 0 sampai i
        for (int j = 0; j <= i; j++) {
            cout << nama[j];
            // Menambahkan spasi di antara huruf agar terlihat seperti contoh
            if (j < i) {
                cout << " ";
            }
        }
        //  Menambahkan baris baru setelah setiap baris selesai dicetak
        cout << endl;
    }

    // Mengembalikan warna terminal ke default sebelum program selesai
    cout << "\033[34m";

    // Segitiga Utuh Sama Kaki
    cout << "\033[33m";

    cout << "\n=== POLA SEGITIGA NAMA ALPIAN ===" << endl;

    // Perulangan untuk mencetak baris dari 0 sampai panjang - 1
    for (int i = 0; i < panjang; i++) {
        // Menambahkan spasi di awal setiap baris untuk membentuk segitiga
        for (int k = 0; k < panjang - i - 1; k++) {
            cout << " ";
        }
        // Perulangan untuk mencetak karakter dari indeks 0 sampai i
        for (int j = 0; j <= i; j++) {
            cout << nama[j];
            // Menambahkan spasi di antara huruf agar terlihat seperti contoh
            if (j < i) {
                cout << " ";
            }
        }
        // Menambahkan baris baru setelah setiap baris selesai dicetak
        cout << endl;
    }

    // Segitiga Sama Kaki Terbalik
    cout << "\033[35m";

    cout << "\n=== POLA SEGITIGA TERBALIK NAMA ALPIAN ===" << endl;

    //  Perulangan untuk mencetak baris terbalik dari panjang - 1 sampai 0 
    for (int i = panjang - 1; i >= 0; i--) {
        // Menambahkan spasi di awal setiap baris untuk membentuk segitiga terbalik
        for (int k = 0; k < panjang - i - 1; k++) {
            cout << " ";
        }
        // Perulangan untuk mencetak karakter dari indeks 0 sampai i 
        for (int j = 0; j <= i; j++) {
            cout << nama[j];
            // Menambahkan spasi di antara huruf agar terlihat seperti contoh
            if (j < i) {
                cout << " ";
            }
        }
        //  Menambahkan baris baru setelah setiap baris selesai dicetak
        cout << endl;
    }

    cout << "\n";

    cout << "=== POLA KOTAK PERSEGI NAMA ALPIAN ===" << endl;

    // Perulangan untuk mencetak baris
    for (int i = 0; i < panjang; i++) {
        // Perulangan untuk mencetak karakter ke samping
        for (int j = 0; j < panjang; j++) {
            cout << nama[j];

            // Menambahkan 2 spasi agar jarak antar huruf lebih melebar 
            // sehingga bentuk kotak terlihat lebih simetris/persegi di layar terminal
            if (j < panjang - 1) {
                cout << "  "; 
            }
        }
        // Menambahkan baris baru
        cout << endl;
    }

    // Mengembalikan warna terminal ke default sebelum program selesai
    cout << "\n";

    // Segtitga sama kaki samping kiri
    cout << "\033[36m";
    cout << "=== POLA BELAH KETUPAT NAMA ALPIAN ===" << endl;

    // 1. Bagian Atas (Segitiga Lancip ke Bawah)
    for (int i = 0; i < panjang; i++) {
        // Cetak spasi di depan agar membentuk segitiga
        for (int k = 0; k < panjang - i - 1; k++) {
            cout << " ";
        }
        // Cetak karakter huruf dengan spasi di antaranya
        for (int j = 0; j <= i; j++) {
            cout << nama[j];
            // Menambahkan spasi di antara huruf agar terlihat seperti contoh
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }

    // 2. Bagian Bawah (Segitiga Terbalik)
    // Dimulai dari i = panjang - 2 agar baris tengah terpanjang tidak tercetak dua kali
    for (int i = panjang - 2; i >= 0; i--) {
        // Cetak spasi di depan untuk mengatur pergeseran ke kanan
        for (int k = 0; k < panjang - i - 1; k++) {
            cout << " ";
        }
        // Cetak karakter huruf dengan spasi di antaranya
        for (int j = 0; j <= i; j++) {
            cout << nama[j];
            // Menambahkan spasi di antara huruf agar terlihat seperti contoh
            if (j < i) {
                cout << " ";
            }
        }
        cout << endl;
    }

    // Mengembalikan warna terminal ke default sebelum program selesai
    cout << "\033[0m";

    return 0;
}
