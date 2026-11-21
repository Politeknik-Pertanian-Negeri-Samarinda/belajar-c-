#include <iostream>
using namespace std;

int main() {
    int a = 4; // File pada tahap pertama
    int rasio = 3; // Kelipatan tiap tahap
    int total = 0;
    
    cout << "--- Penyelesaian Soal 2 ---" << endl;
    for (int i = 1; i <= 4; i++) {
        cout << "Tahap ke-" << i << ": " << a << endl;
        total += a;
        a *= rasio;
    }
    cout << "Total file tahap 1 sampai 4: " << total << endl;
    return 0;
}