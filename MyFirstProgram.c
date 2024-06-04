#include <stdio.h> // untuk bahasa pemograman c

int main() {
    char nama[50]; //Deklarasi array 
    int nim;
    char kom;
    float ip;

    printf("Hello World\n");  // Mencetak

    printf("Masukkan Nama: ");
    // scanf("%s", &nama);
    gets(nama);     // gets : get string untuk membaca input string dari pengguna (depreciated dan tidak aman)

    printf("Masukkan NIM : ");
    scanf("%d", &nim);    // Membaca input integer dari pengguna dan menyimpannya dalam nim

    printf("Masukkan KOM : ");
    scanf(" %c", &kom);

    printf("Masukkan IP : ");
    scanf("%f", &ip);

    // printf("Nama : %s\n", nama);
    printf("Nama : ");
    puts(nama); // puts: put string mencetak string yang disimpan dalam nama diikuti dengan newline

    printf("NIM : %d\n", nim);
    printf("KOM : %c\n", kom);
    printf("IP : %.2f\n", ip);
}