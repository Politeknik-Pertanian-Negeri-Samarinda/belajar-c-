#include <iostream>
using namespace std;

int main() {
    int nilai[3][2] = {
        {80, 90},
        {85, 95},
        {70, 75}
    };

    cout << "Nilai Mahasiswa:\n";
    cout << "-----------------\n";
    
    for (int i = 0; i < 3; i++) {
        cout << "Mahasiswa " << i + 1 << ": ";
        for (int j = 0; j < 2; j++) {
            cout << nilai[i][j] << " ";
        }
        cout << endl;
    }

    // akses data array 2 dimensi
    cout << "\nAkses Data Array 2 Dimensi:\n";
    cout << "Nilai Mahasiswa 1, Mata Kuliah 1: " << nilai[0][0] << endl;
    cout << "Nilai Mahasiswa 2, Mata Kuliah 2: " << nilai[1][1] << endl;
    cout << "Nilai Mahasiswa 3, Mata Kuliah 1: " << nilai[2][0] << endl;

    // akses data array 2 dimensi menggunakan perulangan
    cout << "\nAkses Data Array 2 Dimensi menggunakan Perulangan:\n";
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Nilai Mahasiswa " << i + 1 << ", Mata Kuliah " << j + 1 << ": " << nilai[i][j] << endl;
        }
    }

    // input data nilai mahasiswa ke dalam array 2 dimensi dari user
    cout << "\nInput Data Nilai Mahasiswa:\n";
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Masukkan nilai Mahasiswa " << i + 1 << ", Mata Kuliah " << j + 1 << ": ";
            cin >> nilai[i][j];
        }
    }

    // menampilkan data nilai mahasiswa setelah diinput
    cout << "\nData Nilai Mahasiswa Setelah Diinput:\n";
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "Nilai Mahasiswa " << i + 1 << ", Mata Kuliah " << j + 1 << ": " << nilai[i][j] << endl;
        }
    }

    return 0;
}
