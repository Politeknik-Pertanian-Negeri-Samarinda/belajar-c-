#include <iostream>
using namespace std;

int main() {

    // menentukan bilangan positif atau negatif, ganjil atau genap modulus melalui input dari user, dibuat nested saja
    int number;
    // meminta input dari user
    cout << "Masukkan sebuah bilangan: "; cin >> number;
    // menentukan bilangan positif atau negatif, ganjil atau genap
    if (number > 0) {
        if (number % 2 == 0) {
            cout << number << " adalah bilangan genap dan positif" << endl;
        } else {
            cout << number << " adalah bilangan ganjil dan positif" << endl;
        }
    // menentukan bilangan positif atau negatif, ganjil atau genap
    } else {
        if (number % 2 == 0) {
            cout << number << " adalah bilangan genap dan negatif" << endl;
        } else {
            cout << number << " adalah bilangan ganjil dan negatif" << endl;
        }
    }

    return 0;
}
