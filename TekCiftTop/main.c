#include <stdio.h>

int main() {

     int n,tek ,cift;

    printf("bir sayı giiriniz");
    scanf("%d",&n);
    int i ;
    for (i=0;i<n;i++){
        if(i%2==0){
            cift+=i;
        } else{
            tek+=i;
        }

    }
    printf("tekler toplamı : %d ciftler toplamı  : %d ",tek,cift);
    return 0;
}
