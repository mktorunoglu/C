#include <stdio.h>

int main()
{
    int decimal = 0, binary, us = 1, say;
    printf("Binary:");
    scanf("%d", &binary);
     while(binary > 0)
     {
         say = binary%10;
         decimal = decimal + say * us;
         us *= 2;
         binary /= 10;
     }
     printf("Decimal: %d", decimal);
    return 0;
}