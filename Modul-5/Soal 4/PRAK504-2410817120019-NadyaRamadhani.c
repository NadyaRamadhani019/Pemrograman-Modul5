#include <stdio.h> 
int reverse(int nil){
    int reversed = 0;
    while(nil>0){
        reversed = reversed * 10 + nil % 10;
        nil = nil / 10;
    }
    return reversed;
}

int main() {
    int A, B;
    scanf("%d %d",&A,&B);
    A=reverse(A);
    B=reverse(B);
    int C = A+B;
    printf("%d",reverse(C));

    return 0;
}