#include <iostream>
using namespace std;

int main() {
    int a = 5, beda = 3;
    
    for (int i = 1; i <= 6; i++) {
        cout << "Suku ke-" << i << " = " << a << endl;
        a += beda; // Aturan relasi rekursif aritmetika: a(n) = a(n-1) + beda[cite: 1]
    }
    
    return 0;
}