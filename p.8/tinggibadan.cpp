#include <iostream>
using namespace std;

int main() {
    // program menghitung rata rata berat badan dan tinggi badan menggunakan array
    
    int n = 20; // jumlah data ada 20

    // aku mau data nya ada di array, tidak input dari user
    // jadi hanya fungsi untuk menghitung rata rata berat badan dan tinggi badan pada array

    // nilai maksimal berat badan dan nilai maksimal tinggi badan

    double beratBadan[n] = {50, 60, 55, 70, 65, 80, 75, 90, 85, 100,
                            95, 110, 105, 120, 115, 130, 125, 140, 135, 150};
    double maxBeratBadan = beratBadan[0];
    double maxTinggiBadan = 0; // inisialisasi nilai maksimal tinggi badan
    for (int i = 1; i < n; i++) {
        if (beratBadan[i] > maxBeratBadan) {
            maxBeratBadan = beratBadan[i];
        }
        if (i < n) { // memastikan indeks tidak melebihi batas array
            double tinggiBadan[n] = {170, 175, 180, 185, 190, 195, 200, 205, 210, 215,
                                     220, 225, 230, 235, 240, 245, 250, 255, 260, 265};
            if (tinggiBadan[i] > maxTinggiBadan) {
                maxTinggiBadan = tinggiBadan[i];
            }
        }
    }

    cout << "Nilai maksimal berat badan: " << maxBeratBadan << endl;
    cout << "Nilai maksimal tinggi badan: " << maxTinggiBadan << endl;

    // sekarang mencari minimal berat badan dan tinggi badan
    double minBeratBadan = beratBadan[0];   
    double minTinggiBadan = 0; // inisialisasi nilai minimal tinggi badan
    for (int i = 1; i < n; i++) {
        if (beratBadan[i] < minBeratBadan) {
            minBeratBadan = beratBadan[i];
        }
        if (i < n) { // memastikan indeks tidak melebihi batas array
            double tinggiBadan[n] = {170, 175, 180, 185, 190, 195, 200, 205, 210, 215,
                                     220, 225, 230, 235, 240, 245, 250, 255, 260, 265};
            if (tinggiBadan[i] < minTinggiBadan || minTinggiBadan == 0) {
                minTinggiBadan = tinggiBadan[i];
            }
        }
    }

    cout << "Nilai minimal berat badan: " << minBeratBadan << endl;
    cout << "Nilai minimal tinggi badan: " << minTinggiBadan << endl;

    // rata rata berat badan dan tinggi badan
    double tinggiBadan[n] = {170, 175, 180, 185, 190, 195, 200, 205, 210, 215,
                             220, 225, 230, 235, 240, 245, 250, 255, 260, 265};

    double rataRataBeratBadan = 0;  
    double rataRataTinggiBadan = 0;

    for (int i = 0; i < n; i++) {
        rataRataBeratBadan += beratBadan[i];
        rataRataTinggiBadan += tinggiBadan[i];
    }

    rataRataBeratBadan /= n;
    rataRataTinggiBadan /= n;

    cout << "Rata-rata berat badan: " << rataRataBeratBadan << endl;
    cout << "Rata-rata tinggi badan: " << rataRataTinggiBadan << endl;

    return 0;

}
