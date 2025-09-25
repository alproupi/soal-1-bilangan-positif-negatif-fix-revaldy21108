/*
    Nama    : Revaldy Dearly Zaliandy
    NIM     : 2511035
    Matkul  : Algoritma Dan Pemrograman (Pak Yogi)
    Kelas   : C (KOM-1C)
    LKM     : Latihan Percabangan Soal 2
*/

/*
    -> Menentukan Tahun Kabisat
    Buatlah program dalam bahasa C yang meminta pengguna memasukkan sebuah tahun.
    Program harus menentukan apakah tahun tersebut adalah tahun kabisat atau bukan.
    (Tahun kabisat: Habis dibagi 4 dan tidak habis dibagi 100 kecuali habis dibagi 400)
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int tahun;
    
    // Meminta input dari pengguna
    printf("Masukkan sebuah tahun: ");
    scanf("%d", &tahun);
    
    // Memeriksa apakah tahun kabisat
    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        printf("Tahun %d adalah TAHUN KABISAT\n", tahun);
    } else {
        printf("Tahun %d BUKAN tahun kabisat\n", tahun);
    }

    return 0;
}