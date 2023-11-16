#include <stdio.h>
#include <stdlib.h>

int main() {

    char metin[100];
    printf("metin giriniz : ");
    gets(metin);

    int i ;
    int n = strlen(metin);

    for (i= 0; i <n ; i++) {
        printf("%c",metin[n-1-i]);
    }
    return 0;
}
