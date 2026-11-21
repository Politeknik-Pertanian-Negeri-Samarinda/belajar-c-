#include <iostream>
using namespace std;

int main() {
    // penejelasan program ini secara matematika tentang tahun kabisat
    // Tahun kabisat adalah tahun yang memiliki 366 hari, bukan 365 hari seperti tahun biasa. Tahun kabisat terjadi setiap 4 tahun sekali, kecuali untuk tahun-tahun yang habis dibagi 100, kecuali juga untuk tahun-tahun yang habis dibagi 400. Dengan kata lain:
    // 1. Tahun yang habis dibagi 4 adalah tahun kabisat.
    // 2. Tahun yang habis dibagi 100 bukan tahun kabisat.
    // 3. Tahun yang habis dibagi 400 adalah tahun kabisat.

    // menentukan tahun kabisat atau tidak melalui input dari user
    int year;
    // meminta input dari user
    cout << "Masukkan tahun: "; cin >> year;
    // menentukan tahun kabisat atau tidak
    if (year % 4 == 0) {
        // menentukan tahun kabisat
        if (year % 100 == 0) {
            // menentukan tahun kabisat
            if (year % 400 == 0) {
                cout << year << " adalah tahun kabisat" << endl;
            // menentukan tahun kabisat
            } else {
                cout << year << " bukan tahun kabisat" << endl;
            }
        // menentukan tahun kabisat 
        } else {
            cout << year << " adalah tahun kabisat" << endl;
        }
    // menentukan tahun kabisat
    } else {
        cout << year << " bukan tahun kabisat" << endl;
    }

    return 0;
}
