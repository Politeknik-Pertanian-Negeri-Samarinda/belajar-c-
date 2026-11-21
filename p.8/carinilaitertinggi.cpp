#include <iostream>

using namespace std;

int main() {
    
    // mencari nilai tertinggi dalam array
    const int n = 10;
    int nilai[n] = {75, 88, 92, 67, 85, 90, 78, 95, 80, 82};

    int tertinggi = nilai[0];

    for (int i = 1; i < n; i++) {
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }
    }

    cout << "Nilai tertinggi: " << tertinggi << endl;

    // mencari nilai terendah dalam array
    int terendah = nilai[0];

    for (int i = 1; i < n; i++) {
        if (nilai[i] < terendah) {
            terendah = nilai[i];
        }
    }

    cout << "Nilai terendah: " << terendah << endl;

    // mencari nilai rata-rata dalam array
    int jumlah = 0;

    for (int i = 0; i < n; i++) {
        jumlah += nilai[i];
    }

    float rataRata = static_cast<float>(jumlah) / n;

    cout << "Nilai rata-rata: " << rataRata << endl;

    return 0;
}
