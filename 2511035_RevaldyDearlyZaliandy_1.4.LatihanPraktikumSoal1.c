/*
    Nama    : Revaldy Dearly Zaliandy
    NIM     : 2511035
    Matkul  : Algoritma Dan Pemrograman (Pak Yogi)
    Kelas   : C (KOM-1C)
    LKM     : Latihan Percabangan Soal 1
*/

/*
    -> Menentukan Bilangan Positif atau Negatif
    Buatlah program dalam bahasa C yang meminta pengguna memasukkan sebuah bilangan bulat,
    lalu tampilkan apakah bilangan tersebut positif, negatif, atau nol.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int bilangan;
    
    // Meminta input dari pengguna
    printf("Masukkan sebuah bilangan bulat: ");
    scanf("%d", &bilangan);
    
    // Memeriksa kondisi bilangan
    if (bilangan > 0) {
        printf("Bilangan %d adalah POSITIF\n", bilangan);
    } else if (bilangan < 0) {
        printf("Bilangan %d adalah NEGATIF\n", bilangan);
    } else {
        printf("Bilangan %d adalah NOL\n", bilangan);
    }

    return 0;
}