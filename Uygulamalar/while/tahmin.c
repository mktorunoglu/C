#include <stdio.h>

int main()
{
    int a, tahmin;
    a = 5;

    printf("Tahmininizi giriniz:");
    scanf("%d", &tahmin);

    while(1)
    {
        if(tahmin == a)
        {
            printf("Tebrikler, dogru tahmin.");
            break;
        }
        else
        {
            printf("Yanlis tahmin. Tekrar deneyiniz:");
            scanf("%d", &tahmin);
        }
    }
    return 0;
}

