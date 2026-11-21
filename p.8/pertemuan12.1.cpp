#include <iostream>

#include <iomanip>

using namespace std;


int main() {

    int angka[4][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20}
    };

    cout << "Data Array 2 Dimensi:\n";
    cout << "---------------------\n";
    cout << setw(5) << "Index" << setw(10) << "Data" << endl;
    cout << "---------------------\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << setw(5) << i << setw(10) << angka[i][j] << endl;
        }
    }

    cout << "\nData Array 2 Dimensi menggunakan Perulangan:\n";
    cout << "---------------------\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << setw(5) << i << setw(10) << angka[i][j] << endl;
        }
    }

    // kolom 0 1 2 3 4
    // baris 0 1 2 3
    cout << "\nData Array 2 Dimensi menggunakan Perulangan:\n";
    cout << "---------------------\n";

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << setw(5) << i << setw(10) << angka[i][j] << endl;
        }
    }

    // Menampilkan data array 2 dimensi dalam bentuk tabel
    cout << setw(5) << "kolom 0"
    << setw(5) << " kolom 1"
    << setw(5) << " kolom 2" << endl;

    // Menampilkan data array 2 dimensi dalam bentuk tabel
    for (int i = 0; i < 4; i++) {
        // Menampilkan indeks baris
        for (int j = 0; j < 5; j++) {
            cout << setw(5) << angka[i][j];
        }
        cout << endl;
    }

    return 0;
}
