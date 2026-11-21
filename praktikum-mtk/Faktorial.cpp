#include <iostream>
using namespace std;

unsigned long long faktorial(int n) {
    if (n == 0 || n == 1) return 1; // Kondisi awal[cite: 2]
    return n * faktorial(n - 1);      // Aturan rekursif[cite: 2]
}

int main() {
    int n;
    cout << "Masukkan bilangan (0-20): ";
    cin >> n;
    
    if (n < 0 || n > 20) {
        cout << "Input tidak valid" << endl;
    } else {
        cout << "Faktorial = " << faktorial(n) << endl;
    }
    
    return 0;
}