#include <iostream>
#include <iomanip>

using namespace std;

// Fungsi pertama: Diskon 20% -> f(x) = 0.80 * x[cite: 3]
double diskon(double harga) {
    return 0.80 * harga;
}

// Fungsi kedua: Biaya layanan 5% dari harga diskon -> g(x) = 1.05 * x[cite: 2, 3]
double biayaLayanan(double hargaDiskon) {
    return 1.05 * hargaDiskon;
}

int main() {
    double harga, uang;

    cout << "=== PROGRAM PERHITUNGAN TRANSAKSI (KOMPOSISI FUNGSI) ===\n";
    cout << "Masukkan harga barang (Rp, contoh: 4000000 atau 6000000): ";
    if (!(cin >> harga)) {
        cout << "Input harga tidak valid.\n";
        return 1;
    }

    cout << "Masukkan uang pembeli (Rp, contoh: 3500000 atau 5200000): ";
    if (!(cin >> uang)) {
        cout << "Input uang tidak valid.\n";
        return 1;
    }

    // Validasi nilai negatif
    if (harga < 0 || uang < 0) {
        cout << "Input tidak boleh bernilai negatif.\n";
        return 1;
    }

    // Penerapan komposisi fungsi: (g o f)(x) = g(f(x))
    double setelahDiskon = diskon(harga);
    double total = biayaLayanan(setelahDiskon);
    double selisih = uang - total;

    // Menampilkan hasil dengan 2 angka di belakang koma
    cout << fixed << setprecision(2);
    cout << "\n---------------------------------\n";
    cout << "Harga setelah diskon : Rp" << setelahDiskon << "\n";
    cout << "Total pembayaran     : Rp" << total << "\n";

    if (selisih >= 0) {
        cout << "Sisa uang            : Rp" << selisih << "\n";
    } else {
        cout << "Kekurangan uang      : Rp" << -selisih << "\n";
    }
    cout << "---------------------------------\n";

    return 0;
}