#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argcv[] )
{
    int i;
    for(i = 0; i < argc; i++)
    printf("%s\n", argcv[i]);
    return 0;
}

