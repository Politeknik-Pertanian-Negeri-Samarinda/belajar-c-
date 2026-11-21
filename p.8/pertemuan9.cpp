#include <iostream>
using namespace std;

int main() {
    // Array
    int arr[5] = {10, 20, 30, 40, 50};

    // Mencetak array
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Array Berat Badan
    float arrBeratBadan[5] = {50.5, 55.0, 60.0, 65.0, 70.0};

    // Mencetak array berat badan
    cout << "Array Berat Badan: ";
    for (int i = 0; i < 5; i++) {
        cout << arrBeratBadan[i] << " ";
    }
    cout << endl;

    // Array Nilai Mahasiswa
    int arrNilaiMahasiswa[5] = {80, 85, 90, 95, 100};

    // Mencetak array nilai mahasiswa
    cout << "Array Nilai Mahasiswa: ";
    for (int i = 0; i < 5; i++) {
        cout << arrNilaiMahasiswa[i] << " ";
    }
    cout << endl;

    // Array Nama Mahasiswa
    string arrNamaMahasiswa[5] = {"Alice", "Bob", "Charlie", "David", "Eve"};

    // Mencetak array nama mahasiswa
    cout << "Array Nama Mahasiswa: ";
    for (int i = 0; i < 5; i++) {
        cout << arrNamaMahasiswa[i] << " ";
    }
    cout << endl;

    // perbedaan array biasa dan array pointer
    int* arrPointer[5];

    // Mencetak array pointer
    cout << "Array Pointer: ";
    for (int i = 0; i < 5; i++) {
        cout << arrPointer[i] << " ";
    }
    cout << endl;

    // pointer dalam c++

    int x = 10;
    int* ptr = &x;

    cout << "Nilai x: " << x << endl;
    cout << "Alamat x: " << &x << endl;
    cout << "Nilai pointer: " << ptr << endl;
    cout << "Nilai yang disimpan oleh pointer: " << *ptr << endl;

    int y = 20;
    ptr = &y;

    cout << "Nilai y: " << y << endl;
    cout << "Alamat y: " << &y << endl;
    cout << "Nilai pointer: " << ptr << endl;
    cout << "Nilai yang disimpan oleh pointer: " << *ptr << endl;

    // Pointer ke array
    int arr2[5] = {1, 2, 3, 4, 5};
    int* ptrArr = arr2;

    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << ptrArr[i] << " ";
    }
    cout << endl;

    // Macam macam pointer dalam C++
    int a = 5;
    int* pa = &a;
    int** ppa = &pa;

    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << &a << endl;
    cout << "Nilai pa: " << pa << endl;
    cout << "Nilai yang disimpan oleh pa: " << *pa << endl;
    cout << "Nilai ppa: " << ppa << endl;
    cout << "Nilai yang disimpan oleh ppa: " << *ppa << endl;
    cout << "Nilai yang disimpan oleh ppa: " << **ppa << endl;

    // advance pointer, tinkat lanjut

    int arr3[5] = {1, 2, 3, 4, 5};
    int* ptrArr3 = arr3;

    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << ptrArr3[i] << " ";
    }
    ptrArr3++; // increment pointer
    cout << endl;

    // mengakses array dan mengubah nilai array
    int arr4[5] = {1, 2, 3, 4, 5};
    int* ptrArr4 = arr4;

    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << ptrArr4[i] << " ";
    }
    cout << endl;

    return 0;

}
