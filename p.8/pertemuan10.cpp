#include <iostream>

using namespace std;

int main() {
    const int n = 5;

    int nilai[n] = {85, 90, 78, 92, 88};
    int jumlah = 0;

    // menjumlahkan semua nilai dalam array
    for (int i = 0; i < n; i++) {
        jumlah += nilai[i];
    }

    float rataRata = static_cast<float>(jumlah) / n;

    cout << "Jumlah nilai: " << jumlah << endl;
    cout << "Rata-rata nilai: " << rataRata << endl;

    return 0;
}
