#include <stdio.h>
#include <stdlib.h>

int main() {
    char metin[100];
    int adet = 0;
    printf("metin giriniz : ");
    gets(metin);
    int i;

    for (i = 0; metin[i] != '\0';i++) {
        adet++;
    }

    int boyut = strlen(metin);

    printf("%d",boyut);
    printf("metin boyutu :  %d ",adet);

    return 0;
}
