#include <stdio.h>

int main() {
   char ch;
   int sayi;

    printf("karakter giriniz :");
    scanf("%c",&ch);
    printf("sayi giriniz");
    scanf("%d",&sayi);
    printf("\n");
    int i ;
    for(i = 0 ; i<sayi;i++){
        printf("%d. kez %c karakteri yaziliyor \n",i+1,ch);
    }
    return 0;
}
