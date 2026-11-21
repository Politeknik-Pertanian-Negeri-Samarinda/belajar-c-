#include <iostream>
#include <limits> // Diperlukan untuk numeric_limits

using namespace std;

int main() {
    // Mengubah warna teks terminal menjadi hijau
    cout << "\033[32m";

    char ulang;

    // Loop utama untuk menu program
    do {
        // Deklarasi variabel
        int pilihan;
        
        // Validasi input menu utama dengan deteksi Enter kosong
        while (true) {
            cout << "=== MENU PROGRAM GEOMETRI ===" << endl;
            cout << "1. Hitung Balok (Volume & Luas Permukaan)" << endl;
            cout << "2. Hitung Volume Bola" << endl;
            cout << "3. Studi Kasus: Sisa Air Kubus & Bola" << endl;
            cout << "4. Studi Kasus: Maksimum Bola dalam Balok" << endl;
            cout << "Pilih menu (1-4): ";
            
            // Cek jika user langsung menekan Enter (newline)
            if (cin.peek() == '\n') {
                cout << "\n[PENGINGAT] Input tidak boleh kosong! Harap masukkan angka 1 sampai 4.\n\n";
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                continue;
            }
            
            // Cek apakah input valid dan berada dalam rentang 1-4
            if (cin >> pilihan && (pilihan >= 1 && pilihan <= 4)) {
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Membersihkan sisa buffer newline
                break; // Input valid, keluar dari loop validasi menu
            } else {
                cout << "\n[PENGINGAT] Pilihan tidak valid! Harap masukkan angka 1 sampai 4.\n\n";
                cin.clear(); // Menghapus status error pada cin
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Mengabaikan input salah
            }
        }

        // Berdasarkan pilihan menu, jalankan perhitungan yang sesuai
        if (pilihan == 1) {
            float panjang, lebar, tinggi, volume, luasPermukaan;

            // Output judul
            cout << "\n--- Masukkan Data Balok ---" << endl;
            
            // Validasi input panjang
            while (true) {
                cout << "Masukkan panjang balok: ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid (float)
                if (cin >> panjang) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Validasi input lebar
            while (true) {
                cout << "Masukkan lebar balok: ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid (float)
                if (cin >> lebar) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Validasi input tinggi
            while (true) {
                cout << "Masukkan tinggi balok: ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid (float)
                if (cin >> tinggi) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Menghitung volume dan luas permukaan balok
            volume = panjang * lebar * tinggi;
            luasPermukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));

            // Menampilkan hasil perhitungan balok
            cout << "\n--- Hasil Perhitungan Balok ---" << endl;
            cout << "Volume balok adalah: " << volume << endl;
            cout << "Luas permukaan balok adalah: " << luasPermukaan << endl;

        // Meminta user apakah ingin melakukan perhitungan lagi
        } else if (pilihan == 2) {
            float r, vBola;
            const float phi = 3.14f;

            // Meminta user untuk memasukkan data bola
            cout << "\n--- Masukkan Data Bola ---" << endl;
            
            // Validasi input jari-jari
            while (true) {
                cout << "Masukkan jari-jari bola (r): ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid
                if (cin >> r) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Menghitung volume bola sesuai rumus di papan tulis
            vBola = (4 * phi * r * r * r) / 3;

            cout << "\n--- Hasil Perhitungan Bola ---" << endl;
            cout << "Volume bola adalah: " << vBola << endl;

        // Meminta user apakah ingin melakukan perhitungan lagi
        } else if (pilihan == 3) {
            float r, sisi, volumeKubus, volumeBola, sisaAir;
            const float phi = 3.14f;

            // Meminta user untuk memasukkan data bola
            cout << "\n--- Studi Kasus: Sisa Air dalam Kubus ---" << endl;
            cout << "Ket: Diameter bola sama dengan panjang rusuk kubus." << endl;
            
            // Validasi input jari-jari bola
            while (true) {
                cout << "Masukkan jari-jari bola (r): ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid (float)
                if (cin >> r) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Menghitung volume kubus, volume bola, dan sisa air di dalam kubus
            // Sesuai rumus di papan tulis
            sisi = 2 * r;
            volumeKubus = sisi * sisi * sisi;
            volumeBola = (4 * phi * r * r * r) / 3;
            sisaAir = volumeKubus - volumeBola;

            // Menampilkan hasil studi kasus sisa air dalam kubus setelah bola dimasukkan
            cout << "\n--- Hasil Studi Kasus ---" << endl;
            cout << "Panjang rusuk kubus (diameter) : " << sisi << endl;
            cout << "Volume kubus penuh air        : " << volumeKubus << endl;
            cout << "Volume bola yang dimasukkan   : " << volumeBola << endl;
            cout << "Sisa air di dalam kubus       : " << sisaAir << endl;

        // Meminta user apakah ingin melakukan perhitungan lagi
        } else if (pilihan == 4) {
            float pBalok, lBalok, tBalok, dBola;

            cout << "\n--- Studi Kasus: Maksimum Bola dalam Balok ---" << endl;
            
            // Validasi input panjang balok
            while (true) {
                cout << "Masukkan panjang balok: ";
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid
                if (cin >> pBalok) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Validasi input lebar balok
            while (true) {
                cout << "Masukkan lebar balok: ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid (float)
                if (cin >> lBalok) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Validasi input tinggi balok
            while (true) {
                cout << "Masukkan tinggi balok: ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid (float)
                if (cin >> tBalok) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Input harus berupa angka! Silakan coba lagi.\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Validasi input diameter bola
            while (true) {
                cout << "Masukkan diameter bola: ";
                // Cek jika user langsung menekan Enter (newline)
                if (cin.peek() == '\n') {
                    cout << "[PENGINGAT] Input tidak boleh kosong! Silakan coba lagi.\n";
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    continue;
                }
                // Cek apakah input valid dan lebih besar dari 0
                if (cin >> dBola && dBola > 0) {
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    break;
                }
                // Jika input tidak valid, beri peringatan dan bersihkan buffer
                cout << "[PENGINGAT] Diameter harus berupa angka dan lebih besar dari 0!\n";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Menghitung jumlah bola per dimensi menggunakan pembagian integer
            int jmlPanjang = static_cast<int>(pBalok / dBola);
            int jmlLebar   = static_cast<int>(lBalok / dBola);
            int jmlTinggi  = static_cast<int>(tBalok / dBola);
            int totalBola  = jmlPanjang * jmlLebar * jmlTinggi;

            // Menampilkan hasil
            cout << "\n--- Hasil Studi Kasus ---" << endl;
            cout << "Bola pada arah panjang (p/d) : " << jmlPanjang << endl;
            cout << "Bola pada arah lebar (l/d)   : " << jmlLebar << endl;
            cout << "Bola pada arah tinggi (t/d)  : " << jmlTinggi << endl;
            cout << "Total maksimum bola dalam balok: " << totalBola << endl;
        }

        // Pertanyaan apakah ingin melakukan perhitungan lagi
        while (true) {
            cout << "\nApakah anda ingin melakukan perhitungan lagi? (y/t): ";
            // Cek jika user langsung menekan Enter (newline)
            if (cin.peek() == '\n') {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "[PENGINGAT] Harap masukkan pilihan 'y' atau 't'.\n";
                continue;
            }
            // Cek apakah input valid
            if (cin.peek() == '\n') {
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "[PENGINGAT] Harap masukkan pilihan 'y' atau 't'.\n";
                continue;
            }
            // Meminta input ulang
            cin >> ulang;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            
            // Validasi input ulang
            if (ulang == 'y' || ulang == 'Y' || ulang == 't' || ulang == 'T') {
                break;
            } else {
                cout << "[PENGINGAT] Pilihan tidak valid! Masukkan 'y' untuk ya atau 't' untuk tidak.\n";
            }
        }
        
        cout << "\n----------------------------------------\n\n";

    } while (ulang == 'y' || ulang == 'Y');

    // Mengembalikan warna terminal ke default sebelum program selesai
    cout << "\033[0m";

    return 0;
}
