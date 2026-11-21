#include <iostream>
using namespace std;
int main() {
    // menentekkan bilangan maksimum dari 3 bilangan yang diinput user
    int a, b, c, max;
    // meminta input dari user
    cout << "Masukkan bilangan pertama: "; cin >> a;
    cout << "Masukkan bilangan kedua: "; cin >> b;
    cout << "Masukkan bilangan ketiga: "; cin >> c;

    // menentukan bilangan maksimum
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }

    // menampilkan hasil
    cout << "Nilai maksimum adalah: " << max << endl;
    return 0;
}
