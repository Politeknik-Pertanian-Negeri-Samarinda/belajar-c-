#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;                    // Kondisi awal (F(0)=0, F(1)=1)[cite: 2]
    return fibonacci(n - 1) + fibonacci(n - 2); // Aturan rekursif[cite: 2]
}

int main() {
    int n;
    cout << "Masukkan indeks (0-30): ";
    cin >> n;
    
    if (n < 0 || n > 30) {
        cout << "Input tidak valid" << endl;
    } else {
        cout << "Fibonacci ke-" << n << " = " << fibonacci(n) << endl;
    }
    
    return 0;
} 