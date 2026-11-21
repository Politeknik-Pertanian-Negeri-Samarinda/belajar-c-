#include <iostream>
#include <string>
using namespace std;

int main() {

    string nama, hobi;
    cout << "Masukkan nama Anda: ";
    getline(cin, nama); // Menggunakan getline untuk membaca input dengan spasi
    cout << "Masukkan hobi Anda: ";
    getline(cin, hobi); // Menggunakan getline untuk membaca input dengan spasi

    cout << "\nData yang Anda masukkan:\n";
    cout << "Nama: " << nama << endl;
    cout << "Hobi: " << hobi << endl;

    return 0;
}