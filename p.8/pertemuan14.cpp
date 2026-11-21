#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama = "ALPIAN";
    string hobi = "Membaca Buku";

    cout << "Panjang nama: " << nama.length() << endl;
    cout << "Panjang nama: " << nama.size() << endl; // size() juga bisa digunakan untuk mendapatkan panjang string
    cout << "Panjang hobi: " << hobi.length() << endl;

    return 0;
}
