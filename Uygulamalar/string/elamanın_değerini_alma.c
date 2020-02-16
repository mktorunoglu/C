#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argcv[] )
{
    int a = atoi(argcv[1]);
    int b = atoi(argcv[2]);
    printf("%d", a + b);
    
    return 0;
}

