#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argcv[] )
{
    printf("%d", strcmp(argcv[1], argcv[2]));
    return 0;
}

