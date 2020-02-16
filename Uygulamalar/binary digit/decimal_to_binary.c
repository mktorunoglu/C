#include <stdio.h>

int main()
{
    int decimal, kalan, us = 1, binary = 0;
    printf("Bir sayi giriniz: ");
    scanf("%d", &decimal);
    
    while(decimal > 0){
        kalan = decimal % 2;
        binary += kalan * us;
        decimal /= 2;
        us *= 10;
    }
    
    printf("Binary karsiligi: %d", binary);
    return 0;
}

