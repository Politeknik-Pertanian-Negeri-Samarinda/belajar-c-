#include <iostream> // Mengimpor pustaka input-output standar C++ (iostream) untuk menggunakan cout dan endl
using namespace std; // Menggunakan namespace standar agar tidak perlu menuliskan std:: setiap kali menggunakan cout atau endl

int main() { // Fungsi utama tempat program C++ mulai dieksekusi
    // increment // Komentar topik: tentang increment
    // dan decrement // Komentar topik: tentang decrement
    // prefix dan postfix // Komentar topik: tentang prefix dan postfix

    // deklarasi // Komentar topik: deklarasi variabel
    int a = 5; // Mendeklarasikan variabel integer 'a' dengan nilai awal 5
    cout << "Nilai awal a: " << a << endl; // Menampilkan nilai awal variabel 'a' ke layar

    // prefix // Komentar topik: operasi prefix/postfix
    cout << "a++ = " << a++ << endl; // Menampilkan 'a' (5 dulu) kemudian nilai 'a' ditambah 1 (menjadi 6)
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru setelah postfix increment (yaitu 6)

    // postfix // Komentar topik: operasi postfix/prefix
    cout << "++a = " << ++a << endl; // Menambah nilai 'a' terlebih dahulu (jadi 7) lalu menampilkannya
    cout << "a = " << a << endl; // Menampilkan nilai 'a' saat ini (yaitu 7)

    // increment // Komentar topik: increment penambahan nilai
    cout << "a += 2 = " << (a += 2) << endl; // Menambahkan 2 ke 'a' (7 + 2 = 9) dan langsung menampilkan hasilnya
    cout << "a = " << a << endl; // Menampilkan nilai 'a' saat ini setelah ditambah 2 (yaitu 9)

    // decrement // Komentar topik: decrement pengurangan nilai
    cout << "a-- = " << a-- << endl; // Menampilkan 'a' (9 dulu) kemudian nilai 'a' dikurangi 1 (menjadi 8)
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru setelah postfix decrement (yaitu 8)

    // postfix // Komentar topik: operasi postfix/prefix decrement
    cout << "--a = " << --a << endl; // Mengurangi nilai 'a' terlebih dahulu (jadi 7) lalu menampilkannya
    cout << "a = " << a << endl; // Menampilkan nilai 'a' saat ini (yaitu 7)

    // increment // Komentar topik: operasi penugasan aritmatika
    cout << "a -= 2 = " << (a -= 2) << endl; // Mengurangi 'a' dengan 2 (7 - 2 = 5) dan menampilkan hasilnya
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru (yaitu 5)

    // increment // Komentar topik: operasi perkalian penugasan
    cout << "a *= 2 = " << (a *= 2) << endl; // Mengalikan 'a' dengan 2 (5 * 2 = 10) dan menampilkan hasilnya
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru (yaitu 10)

    // increment // Komentar topik: operasi pembagian penugasan
    cout << "a /= 2 = " << (a /= 2) << endl;     // Membagi 'a' dengan 2 (10 / 2 = 5) dan menampilkan hasilnya
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru (yaitu 5)

    // increment // Komentar topik: operasi sisa bagi penugasan
    cout << "a %= 2 = " << (a %= 2) << endl;     // Menghitung sisa bagi 'a' dengan 2 (5 % 2 = 1) dan menampilkan hasilnya
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru (yaitu 1)

    // increment // Komentar topik: operasi bitwise AND penugasan
    cout << "a &= 2 = " << (a &= 2) << endl;     // Melakukan operasi bitwise AND antara 'a' dan 2 (1 & 2 = 0)
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru (yaitu 0)

    // increment // Komentar topik: operasi bitwise OR penugasan
    cout << "a |= 2 = " << (a |= 2) << endl;     // Melakukan operasi bitwise OR antara 'a' dan 2 (0 | 2 = 2)
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru (yaitu 2)

    // increment // Komentar topik: operasi bitwise XOR penugasan
    cout << "a ^= 2 = " << (a ^= 2) << endl;     // Melakukan operasi bitwise XOR antara 'a' dan 2 (2 ^ 2 = 0)
    cout << "a = " << a << endl; // Menampilkan nilai 'a' terbaru (yaitu 0)

    // looping untuk increment dan decrement // Komentar bagian: judul bagian perulangan
    cout << "\nLooping Increment (0-4):" << endl; // Menampilkan teks judul perulangan increment 0 sampai 4
    // looping increment // Komentar keterangan for loop
    for (int i = 0; i < 5; i++) { // Memulai perulangan for dengan i dari 0 hingga kurang dari 5, bertambah 1 tiap iterasi
        cout << "i = " << i << endl; // Menampilkan nilai variabel 'i' pada setiap iterasi perulangan
    } // Menutup blok kode perulangan for pertama

    // looping untuk decrement // Komentar bagian: judul perulangan decrement
    cout << "\nLooping Decrement (4-0):" << endl; // Menampilkan teks judul perulangan decrement 4 sampai 0
    // looping decrement // Komentar keterangan for loop decrement
    for (int i = 4; i >= 0; i--) { // Memulai perulangan for dengan i dari 4 turun hingga lebih besar atau sama dengan 0
        cout << "i = " << i << endl; // Menampilkan nilai variabel 'i' saat ini
    } // Menutup blok kode perulangan for decrement

    // looping increment dengan step 2 // Komentar bagian: perulangan increment step
    cout << "\nLooping Increment (1-5) dengan step 2:" << endl; // Menampilkan judul perulangan increment 1-5
    // looping increment dengan step 2 // Komentar keterangan perulangan
    for (int i = 1; i <= 5; i++) { // Memulai perulangan for dari 1 sampai 5 dengan increment standar 1
        cout << "i = " << i << endl; // Menampilkan nilai 'i' pada setiap iterasi
    } // Menutup blok perulangan for

    // looping decrement dengan step 2 // Komentar bagian: perulangan decrement step
    cout << "\nLooping Decrement (5-1) dengan step 2:" << endl; // Menampilkan judul perulangan decrement 5-1
    // looping decrement dengan step 2 // Komentar keterangan perulangan
    for (int i = 5; i >= 1; i--) { // Memulai perulangan for dari 5 turun ke 1 dengan decrement standar 1
        cout << "i = " << i << endl; // Menampilkan nilai 'i' pada setiap iterasi
    } // Menutup blok perulangan for

    // looping increment dengan step 2 // Komentar bagian: perulangan increment step 2
    cout << "\nLooping Increment (0-10-2):" << endl; // Menampilkan judul perulangan 0 sampai 10 kelipatan 2
    // looping increment dengan step 2 // Komentar keterangan perulangan
    for (int i = 0; i <= 10; i += 2) { // Memulai perulangan for dari 0 sampai 10 dengan penambahan 2 (i += 2) setiap iterasi
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    // looping decrement dengan step 2 // Komentar bagian: perulangan decrement step 2
    cout << "\nLooping Decrement (10-0-2):" << endl; // Menampilkan judul perulangan 10 turun ke 0 dengan step 2
    
    // looping decrement dengan step 2 // Komentar duplikat keterangan perulangan
    cout << "\nLooping Decrement (10-0-2):" << endl; // Menampilkan kembali teks judul perulangan decrement 10-0 step 2

    for (int i = 10; i >= 0; i -= 2) { // Memulai perulangan for dari 10 turun ke 0 dengan pengurangan 2 (i -= 2)
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    cout << "\nLooping Increment (1-10-2):" << endl; // Menampilkan judul perulangan increment 1 sampai 10 dengan step 2
    for (int i = 1; i <= 10; i += 2) { // Memulai perulangan for dari 1 sampai 10 dengan penambahan 2 setiap iterasi
        cout << "i = " << i << endl; // Menampilkan nilai 'i' pada iterasi tersebut
    } // Menutup blok perulangan for

    cout << "\nLooping Decrement (10-1-2):" << endl; // Menampilkan judul perulangan decrement 10 turun ke 1 dengan step 2
    for (int i = 10; i >= 1; i -= 2) { // Memulai perulangan for dari 10 turun ke 1 dengan pengurangan 2 setiap iterasi
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    // posfix increment dan decrement dalam loop // Komentar bagian: penggunaan postfix di dalam loop
    cout << "\nLooping Increment (0-4) dengan postfix increment:" << endl; // Menampilkan judul perulangan postfix increment
    for (int i = 0; i < 5; i++) { // Memulai perulangan for dengan menggunakan postfix increment (i++)
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    cout << "\nLooping Decrement (4-0) dengan postfix decrement:" << endl; // Menampilkan judul perulangan postfix decrement
    for (int i = 4; i >= 0; i--) { // Memulai perulangan for dengan menggunakan postfix decrement (i--)
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    cout << "\nLooping Increment (1-5) dengan postfix increment:" << endl; // Menampilkan judul perulangan 1-5 postfix increment
    for (int i = 1; i <= 5; i++) { // Memulai perulangan for dari 1 sampai 5 menggunakan i++
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    // prefix increment dan decrement dalam loop // Komentar bagian: penggunaan prefix di dalam loop
    cout << "\nLooping Increment (0-4) dengan prefix increment:" << endl // Menampilkan judul perulangan prefix increment
;    for (int i = 0; i < 5; ++i) { // Memulai perulangan for dengan menggunakan prefix increment (++i)
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    cout << "\nLooping Decrement (4-0) dengan prefix decrement:" << endl; // Menampilkan judul perulangan prefix decrement
    for (int i = 4; i >= 0; --i) { // Memulai perulangan for dengan menggunakan prefix decrement (--i)
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for    

    cout << "\nLooping Increment (1-5) dengan prefix increment:" << endl; // Menampilkan judul perulangan 1-5 prefix increment
    for (int i = 1; i <= 5; ++i) { // Memulai perulangan for dari 1 sampai 5 menggunakan ++i
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for    

    // while loop // Komentar bagian: perulangan while
    cout << "\nLooping While (0-4):" << endl; // Menampilkan judul perulangan menggunakan while
    int j = 0; // Mendeklarasikan variabel kontrol perulangan while bernilai awal 0
    while (j < 5) { // Melakukan perulangan selama kondisi j kurang dari 5 bernilai benar
        cout << "j = " << j << endl; // Menampilkan nilai variabel 'j'
        j++; // Menambahkan nilai 'j' sebesar 1 pada setiap iterasi agar perulangan bisa berhenti
    } // Menutup blok perulangan while    

    // do-while loop // Komentar bagian: perulangan do-while
    cout << "\nLooping Do-While (0-4):" << endl; // Menampilkan judul perulangan do-while
    int k = 0; // Mendeklarasikan variabel kontrol 'k' dengan nilai awal 0
    do { // Memulai blok perulangan do-while (dieksekusi minimal sekali)
        cout << "k = " << k << endl; // Menampilkan nilai variabel 'k'
        k++; // Menambahkan nilai 'k' sebesar 1
    } while (k < 5); // Memeriksa kondisi perulangan di akhir blok (apakah k < 5)

    // looping terbalik, dari 100-0 dengan decrement 5 // Komentar bagian: perulangan mundur step 5
    cout << "\nLooping Terbalik (100-0) dengan decrement 5:" << endl; // Menampilkan judul perulangan 100 ke 0 step 5
    for (int i = 100; i >= 0; i -= 5) { // Memulai perulangan for dari 100 turun ke 0 dengan decrement 5 (i -= 5)
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    // loopig dari 0 ke -100 // Komentar bagian: perulangan menuju angka negatif
    cout << "\nLooping dari 0 ke -100:" << endl; // Menampilkan judul perulangan dari 0 hingga -100
    for (int i = 0; i >= -100; i--) { // Memulai perulangan for dari 0 turun hingga -100
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    // loooping decrement kelipatan 5 -100-0 // Komentar bagian: perulangan naik dari -100 ke 0 step 5
    cout << "\nLooping Decrement Kelipatan 5 (-100-0):" << endl; // Menampilkan judul perulangan dari -100 ke 0 step 5
    for (int i = -100; i <= 0; i += 5) { // Memulai perulangan for dari -100 naik ke 0 dengan penambahan 5 (i += 5)
        cout << "i = " << i << endl; // Menampilkan nilai 'i' saat ini
    } // Menutup blok perulangan for

    // output: 1 2 3 4 5 6 7 8 9 10 // Komentar catatan penjelasan output
    //         1 2 3 4 5 6 7 8 9 10 // Komentar catatan penjelasan output baris berikutnya
    // jadi output nya double loop nya // Komentar catatan bahwa ini adalah nested loop
    cout << "\nLooping Double (1-10):" << endl; // Menampilkan judul untuk perulangan bersarang (nested loop)
    for (int i = 1; i <= 10; i++) { // Perulangan luar (outer loop) untuk baris dari 1 sampai 10
        for (int j = 1; j <= 10; j++) { // Perulangan dalam (inner loop) untuk mencetak kolom dari 1 sampai 10
            cout << j << " "; // Menampilkan nilai 'j' diikuti spasi dalam satu baris yang sama
        } // Menutup blok perulangan dalam (inner loop)
        cout << endl; // Mencetak baris baru setelah perulangan kolom selesai untuk setiap barisnya
    } // Menutup blok perulangan luar (outer loop)

    return 0; // Status keluar // Mengembalikan nilai 0 tanda program sukses dijalankan tanpa error
} // Menutup blok fungsi utama main
