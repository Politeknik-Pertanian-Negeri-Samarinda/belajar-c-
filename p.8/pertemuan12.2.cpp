#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Array 2 dimensi untuk menyimpan nilai mahasiswa dalam bentuk table
    int nilai[4][5] = {
        {80, 90, 85, 70, 75},
        {60, 65, 70, 55, 50},
        {90, 95, 85, 80, 75},
        {70, 75, 80, 85, 90}
    };

    // Mencetak nilai mahasiswa dalam bentuk table
    cout << "Nilai Mahasiswa:\n";
    cout << "-----------------\n";
    for (int i = 0; i < 4; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        for (int j = 0; j < 5; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    // Menghitung rata-rata nilai setiap mahasiswa
    cout << "\nRata-rata Nilai Mahasiswa:\n";
    cout << "-----------------\n";
    for (int i = 0; i < 4; i++) {
        float rataRata = 0;
        for (int j = 0; j < 5; j++) {
            rataRata += nilai[i][j];
        }
        rataRata /= 5;
        cout << "Mahasiswa " << i + 1 << ": " << fixed << setprecision(2) << rataRata << endl;
    }

    return 0;
}
