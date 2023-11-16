#include <stdio.h>

int main() {
    int s1,s2;
    char secim;

    printf("Karakter  giriniz [ +, -, *, / ] :" ); scanf("%c",&secim);

    printf("1.sayiyi giriniz :"); scanf("%d",&s1);

    printf("2.sayiyi giriniz : "); scanf("%d",&s2);


    switch (secim) {
        case '+' : printf("islem sonuc : %d",(s1+s2)) ;  break;

        case '-' : printf("islem sonuc : %d",(s1-s2)) ;   break;

        case '*' : printf("islem sonuc : %d",(s1*s2)) ;   break;

        case '/' : printf("islem sonuc : %d",(s1/s2)) ; break;

        default :    printf("gecersiz islem");
    }

    return 0;
}
