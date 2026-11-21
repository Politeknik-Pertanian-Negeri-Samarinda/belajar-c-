#include <iostream>
using namespace std;

int main() {

    // materi loop sampai do while, while, nested loop etc.

    int i = 1;
    do {
        cout << i << endl;
        i++;
    } while (i <= 10);

    // output
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 10

    // materi loop sampai do while, while, nested loop etc.

    // while loop
    int j = 1;
    while (j <= 10) {
        cout << j << endl;
        j++;
    }

    // output
    // 1
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // 10

    // nested loop
    for (int k = 1; k <= 5; k++) {
        for (int l = 1; l <= 5; l++) {
            cout << "* ";
        }
        cout << endl;
    }

    // do while loop menampilkan menu
    int choice;
    do {
        cout << "Menu:\n";
        cout << "1. Option 1\n";
        cout << "2. Option 2\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "You selected Option 1\n";
                break;
            case 2:
                cout << "You selected Option 2\n";
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (choice != 3);

    // output
    // Menu:
    // 1. Option 1
    // 2. Option 2
    // 3. Exit
    // Enter your choice: 1
    // You selected Option 1

    // studi kasus do while loop
    // menghitung jumlah angka genap
    int num, count = 0;
    do {
        cout << "Masukkan angka: ";
        cin >> num;
        if (num % 2 == 0) {
            count++;
        }
    } while (num != 0);

    cout << "Jumlah angka genap: " << count << endl;

    // output
    // Masukkan angka: 2
    // Masukkan angka: 4
    // Masukkan angka: 6
    // Masukkan angka: 8
    // Masukkan angka: 0
    // Jumlah angka genap: 4

    // studi kasus lain
    // menghitung jumlah angka ganjil
    int num2, count2 = 0;    
    do {
        cout << "Masukkan angka: ";
        cin >> num2;
        if (num2 % 2 != 0) {
            count2++;
        }
    } while (num2 != 0);

    cout << "Jumlah angka ganjil: " << count2 << endl;

    // output
    // Masukkan angka: 1
    // Masukkan angka: 3
    // Masukkan angka: 5
    // Masukkan angka: 7
    // Masukkan angka: 9
    // Masukkan angka: 0
    // Jumlah angka ganjil: 5

    // studi kasus lain
    // menghitung jumlah angka genap dan ganjil
    int num3, count3 = 0, count4 = 0;
    do {
        cout << "Masukkan angka: ";
        cin >> num3;
        if (num3 % 2 == 0) {
            count3++;
        } else {
            count4++;
        }
    } while (num3 != 0);

    cout << "Jumlah angka genap: " << count3 << endl;
    cout << "Jumlah angka ganjil: " << count4 << endl;

    // output
    // Masukkan angka: 2
    // Masukkan angka: 4
    // Masukkan angka: 6
    // Masukkan angka: 8
    // Masukkan angka: 0
    // Jumlah angka genap: 4
    // Jumlah angka ganjil: 0

    return 0;
}
