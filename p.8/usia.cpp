#include <iostream>
using namespace std;

int main() {
    // menampilkan judul
    cout << "Program menentukan kategori usia" << endl;

    // menentukan usia kategori
    int age;

    // meminta input dari user
    cout << "Masukkan usia: ";

    // membaca input dari user
    cin >> age;

    // menentukan kategori usia berdasarkan input dari user
    if (age >= 0 && age <= 12) {
        cout << "Anak-anak" << endl;
    } else if (age >= 13 && age <= 17) {
        cout << "Remaja" << endl;
    } else if (age >= 18 && age <= 59) {
        cout << "Dewasa" << endl;
    } else {
        cout << "Lansia" << endl;
    }

    return 0;
}
