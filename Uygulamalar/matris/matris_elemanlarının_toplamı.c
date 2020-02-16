#include <stdio.h>

int main()
{
    int matris[3][3] = {
        1, 2, 3,
        4, 5, 6,
        7, 8, 9};

        int toplam = 0;

    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            toplam += matris[i][k];
        }
    }

    printf("Matrisin elemanlarinin toplami: %d", toplam);

    return 0;
}

