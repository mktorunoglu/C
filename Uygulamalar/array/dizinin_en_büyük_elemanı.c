#include <stdio.h>

int main()
{
    int dizi[10] = {8, 56, 4, 21, 20, 1, 83, 47, 9, 10};

    for(int i = 0; i < 10; i++){
        printf("%d sayisinin indisi: %d\n", dizi[i], i);
    }

    int enbuyuk;
    enbuyuk = dizi[0];

    for(int i = 0; i < 10; i++){
        if(enbuyuk < dizi[i])
        enbuyuk = dizi[i];
    }

    printf("Dizinin en buyuk elemani: %d\n", enbuyuk);

    for(int i = 0; i < 10; i++){
        if(enbuyuk == dizi[i])
        printf("En buyuk sayinin indisi : %d\n", i);
    }

    return 0;
}

