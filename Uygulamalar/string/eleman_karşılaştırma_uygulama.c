#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argcv[] )
{
    int i;
    for(i = 1; i < argc; i++){
    if(strcmp(argcv[i], "murat") == 0)
    printf("Murat vardir. Konumu: %d", i);
    }

    return 0;
}

