#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argcv[] )
{
    int i;
    for(i = 1; i < argc; i++){
        printf("\n%s\n", argcv[i]);
        putchar(*argcv[i]);
    }
    return 0;
}

