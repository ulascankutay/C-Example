#include <stdio.h>

int main() {

    char metin[100];
    char ch;
    int adet = 0;

    printf("metin giriniz");
    gets(metin);
    printf("karakter giriniz");
    scanf("%c", &ch);

    int i;
    for (i = 0; metin[i] != '\0'; i++) {
        if (metin[i] == ch) {
            adet++;
        }
    }
    printf("%c harfinden %d adet vardir", ch, adet);
    return 0;
}
