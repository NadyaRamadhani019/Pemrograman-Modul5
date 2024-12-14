#include <stdio.h>
#include <math.h>

int hitung(int nilai1, int nilai2){
    int angka = nilai1 - nilai2;
    if(angka<0){
        return -angka;
    }else{
        return angka;
    }
}

int mutlak(int angka){
    if(angka<0){
        return -angka;
    }
    return angka;
}

int main(){ 
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    int hasil = hitung(a,c) + hitung(b,d);
    printf("%d",mutlak(hasil));
    
    return 0;
}