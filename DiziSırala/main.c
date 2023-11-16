#include <stdio.h>

int main() {
    int dizi []= {15,12,3,6,5,8,97,4,5,6,2};

    int i,j;

    for (i=0;i<10;i++){
        for (j=0;j<i;j++){
            if(dizi[i]<dizi[j]){
                int temp = dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;

            }
        }

    }
    for (i=0;i<10;i++){

        printf("%d - ",dizi[i]);
    }
    return 0;
}
