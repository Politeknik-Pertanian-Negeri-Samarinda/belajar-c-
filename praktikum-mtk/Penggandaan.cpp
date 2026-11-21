#include <iostream>
using namespace std;

int main() {
    int data = 5;
    
    cout << "--- Penyelesaian Soal 3: Penggandaan Data ---" << endl;
    for (int tahap = 1; tahap <= 6; tahap++) {
        cout << "Tahap ke-" << tahap << " = " << data << " data" << endl;
        if (tahap < 6) {
            data *= 2;
        }
    }
    return 0;
}