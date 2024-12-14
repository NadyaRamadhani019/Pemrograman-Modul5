#include <stdio.h>

void Biodata(int tahunLahir, char Namaku[20], char Asal[15]){
    int tahun_sekarang = 2020;
    int usia = tahun_sekarang - tahunLahir;
    printf("Perkenalkan Nama Saya : %s\n", Namaku);
    printf("Umur Saya : %d\n", usia);
    printf("Saya Adalah Angkatan : 2020\n");
    printf("Asal Saya dari : %s\n", Asal);
}

int main(){
    int tahunLahir;
        char Namaku[20], Asal[15];
        scanf(" %d", &tahunLahir);
        scanf(" %[^\n]%*c", &Namaku);
        scanf(" %[^\n]%*c", &Asal);
    Biodata(tahunLahir, Namaku, Asal);
    return 0;
}
