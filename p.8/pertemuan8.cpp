#include <iostream>
using namespace std;

int main()  {
    int L, K;
    cout << "Masukkan jumlah L: ";
    cin >> L;
    cout << "Masukkan jumlah K: ";
    cin >> K;

    char j = 'A';
    int B = 3; // jumlah kolom

    for(int i = 1; i <= L; i++) {
        j = 'A';
        for(int l = 1; l <= B; l++) {
            for(int k = 1; k <= K; k++ ) {
                cout << i << j << k << " ";
            }
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}
