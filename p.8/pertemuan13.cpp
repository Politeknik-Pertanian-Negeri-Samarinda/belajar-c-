#include <iostream>
#include <string>
using namespace std;

int main() {

    cout << "\nData yang Anda masukkan:\n";

    // String dalam c++
    string nama = "Alpian";
    string kampus = "Universitas XYZ";
    string hobi;
    
    cout << "Masukkan hobi Anda: ";
    getline(cin, hobi); // Menggunakan getline untuk membaca input dengan spasi
    
    cout << "\nData yang Anda masukkan:\n";
    cout << "Nama: " << nama << endl;
    cout << "Kampus: " << kampus << endl;
    cout << "Hobi: " << hobi << endl;

    // input nomor hp tanpa getline
    cout << "masukkan nomor hp Anda: ";
    string nomorHp;
    cin >> nomorHp;
    cout << "Nomor HP: " << nomorHp << endl;
    
    cout << "Nama: " << nama << endl;
    cout << "Kampus: " << kampus << endl;
    cout << "Hobi: " << hobi << endl;

    return 0;
}
