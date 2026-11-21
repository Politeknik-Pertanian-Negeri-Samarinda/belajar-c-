#include <iostream>

using namespace std;

int main() {
    // 1. Contoh Penggunaan if
    int a = 5;
    if (a > 0) {
        cout << "a is positive" << endl;
    }

    // 2. Contoh Penggunaan if-else
    int x = 10;
    if (x > 0) {
        cout << "x is positive" << endl;
    } else {
        cout << "x is not positive" << endl;
    }

    // 3. Contoh Penggunaan if-else-if
    int y = 5;
    if (y > 0) {
        cout << "y is positive" << endl;
    } else if (y < 0) {
        cout << "y is negative" << endl;
    } else {
        cout << "y is zero" << endl;
    }

    // 4. Contoh Penggunaan Nested If (If di dalam If)
    int age;
    // meminta input dari user
    cout << "Enter your age: ";
    // membaca input dari user
    cin >> age;

    // menentukan kategori usia
    if (age >= 18) {
        cout << "You are an adult" << endl;
        if (age >= 65) {
            cout << "You are a senior citizen" << endl;
        } else {
            cout << "You are of productive age" << endl;
        }
    } else {
        cout << "You are a minor" << endl;
    }

    // 5. Contoh Percabangan dengan Input Ganda (Membandingkan 2 Angka)
    int num1, num2;
    cout << "Enter two integers: ";
    // membaca input dari user
    cin >> num1 >> num2;

    // Membandingkan kedua angka dan menampilkan hasilnya
    if (num1 > num2) {
        cout << num1 << " is greater than " << num2 << endl;
    } else if (num1 < num2) {
        cout << num1 << " is less than " << num2 << endl;
    } else {
        cout << "Both numbers are equal" << endl;
    }

    // 6. Contoh Penilaian / Kelulusan (If-Else-If Berjenjang)
    int nilai;
    cout << "Masukkan nilai: ";
    cin >> nilai;

    if (nilai >= 90) {
        cout << "Nilai A" << endl;
    } else if (nilai >= 80) {
        cout << "Nilai B" << endl;
    } else if (nilai >= 70) {
        cout << "Nilai C" << endl;
    } else if (nilai >= 60) {
        cout << "Nilai D" << endl;
    } else {
        cout << "Nilai E" << endl;
    }

    // 7. Contoh Penggunaan Switch-Case
    char grade;
    cout << "Masukkan grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent!" << endl;
            break;
        case 'B':
            cout << "Good!" << endl;
            break;
        case 'C':
            cout << "Average!" << endl;
            break;
        case 'D':
            cout << "Below Average!" << endl;
            break;
        case 'E':
            cout << "Fail!" << endl;
            break;
        default:
            cout << "Invalid grade" << endl;
    }

    // 8. Contoh Penggunaan Ternary Operator
    int num = 10;
    string result = (num % 2 == 0) ? "Even" : "Odd";
    cout << "Number " << num << " is " << result << endl;

    // 9. Contoh Penggunaan Nested Ternary Operator
    int score = 85;
    string grades = (score >= 90) ? "A" : (score >= 80) ? "B" : (score >= 70) ? "C" : "D";
    cout << "Score: " << score << ", Grade: " << grades << endl;

    // 10. Contoh Penggunaan Ternary Operator dalam Pengkondisian
    int age1 = 18;
    string message = (age1 >= 18) ? "You are an adult" : "You are a minor";
    cout << message << endl;

    // 11. Contoh Penggunaan Ternary Operator dalam Pengkondisian
    int num3 = 5;
    string result2 = (num3 % 2 == 0) ? "Even" : "Odd";
    cout << "Number " << num3 << " is " << result2 << endl;

    // 12. Contoh Penggunaan Ternary Operator dalam Pengkondisian
    int num4 = 15;

    string result3 = (num4 % 3 == 0) ? "Divisible by 3" : "Not divisible by 3";
    cout << "Number " << num4 << " is " << result3 << endl;

    // operator relasional dalam cpp
    int a1 = 10;
    int b1 = 20;

    cout << "a1 == b1: " << (a1 == b1) << endl; // false
    cout << "a1 != b1: " << (a1 != b1)
    << endl; // true
    cout << "a1 > b1: " << (a1 > b1) << endl;   // false
    cout << "a1 < b1: " << (a1 < b1) << endl;   // true
    cout << "a1 >= b1: " << (a1 >= b1) << endl; // false
    cout << "a1 <= b1: " << (a1 <= b1)
    << endl; // true

    // operator logika dalam cpp
    bool c1 = true;
    bool d1 = false;

    cout << "c1 && d1: " << (c1 && d1) << endl; // false
    cout << "c1 || d1: " << (c1 || d1)
    << endl; // true
    cout << "!c1: " << (!c1) << endl; // false

    // operator aritmatika dalam cpp
    int e1 = 5;
    int f1 = 3;

    cout << "e1 + f1: " << (e1 + f1) << endl; // 8
    cout << "e1 - f1: " << (e1 - f1)
    << endl; // 2
    cout << "e1 * f1: " << (e1 * f1)
    << endl; // 15
    cout << "e1 / f1: " << (e1 / f1) << endl; // 1
    cout << "e1 % f1: " << (e1 % f1) << endl; // 2

    // operator perbandingan dalam cpp
    int g1 = 10;
    int h1 = 20;

    cout << "g1 == h1: " << (g1 == h1) << endl; // false
    cout << "g1 != h1: " << (g1 != h1)
    << endl; // true
    cout << "g1 > h1: " << (g1 > h1) << endl;   // false
    cout << "g1 < h1: " << (g1 < h1) << endl;   // true
    cout << "g1 >= h1: " << (g1 >= h1) << endl; // false
    cout << "g1 <= h1: " << (g1 <= h1)
    << endl; // true

    // opeator tersebut di dalam if statement atau or conditional statement
    int i1 = 10;
    int j1 = 20;

    if (i1 == j1) {
        cout << "i1 sama dengan j1" << endl;
    } else if (i1 != j1) {
        cout << "i1 tidak sama dengan j1" << endl;
    } else if (i1 > j1) {
        cout << "i1 lebih besar dari j1" << endl;
    } else if (i1 < j1) {
        cout << "i1 lebih kecil dari j1" << endl;
    } else if (i1 >= j1) {
        cout << "i1 lebih besar atau sama dengan j1" << endl;
    } else if (i1 <= j1) {
        cout << "i1 lebih kecil atau sama dengan j1" << endl;
    }

    // operator logika dalam cpp
    bool k1 = true;
    bool l1 = false;

    if (k1 && l1) {
        cout << "k1 dan l1 bernilai true" << endl;
    } else if (k1 || l1) {
        cout << "k1 atau l1 bernilai true" << endl;
    } else {
        cout << "k1 dan l1 bernilai false" << endl;
    }

    // dalam or conditional statement, kita bisa menggunakan operator logika untuk menggabungkan beberapa kondisi. Misalnya, kita ingin memeriksa apakah sebuah angka berada dalam rentang tertentu:
    int m1 = 15;
    if (m1 >= 10 && m1 <= 20) {
        cout << "m1 berada dalam rentang 10 hingga 20" << endl;
    } else {
        cout << "m1 berada di luar rentang 10 hingga 20" << endl;
    }

    // dalam for loop, kita bisa menggunakan operator logika untuk mengontrol alur perulangan. Misalnya, kita ingin mencetak angka dari 1 hingga 10, tetapi hanya mencetak angka genap:
    for (int n1 = 1; n1 <= 10; n1++)
    {
        if (n1 % 2 == 0) {
            cout << n1 << " ";
        }
    }

    // dalam while loop, kita bisa menggunakan operator logika untuk mengontrol alur perulangan. Misalnya, kita ingin mencetak angka dari 1 hingga 10, tetapi hanya mencetak angka genap:
    int o1 = 1;
    while (o1 <= 10)
    {
        if (o1 % 2 == 0) {
            cout << o1 << " ";
        }
        o1++;
    }

    // dalam do-while loop, kita bisa menggunakan operator logika untuk mengontrol alur perulangan. Misalnya, kita ingin mencetak angka dari 1 hingga 10, tetapi hanya mencetak angka genap:
    int p1 = 1;
    do
    {
        if (p1 % 2 == 0) {
            cout << p1 << " ";
        }
        p1++;
    } while (p1 <= 10);

    // dalam switch case, kita bisa menggunakan operator logika untuk mengontrol alur perulangan. Misalnya, kita ingin mencetak angka dari 1 hingga 10, tetapi hanya mencetak angka genap:
    int q1 = 1;
    switch (q1)
    {
    case 1:
        cout << "Satu" << endl;
        break;
    case 2:
        cout << "Dua" << endl;
        break;
    case 3:
        cout << "Tiga" << endl;
        break;
    default:
        cout << "Bukan angka 1, 2, atau 3" << endl;
        break;
    }

    return 0;
}
