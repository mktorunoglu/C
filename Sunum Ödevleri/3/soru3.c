#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argcv[])
{
    int i, t, kontrol;
    kontrol = 0;
    
    for(i = 0; i < strlen(argcv[1]); i++){
        for(t = 0; t < strlen(argcv[2]); t++){
            if( *(argcv[1] + i) == *(argcv[2] + t) )
            kontrol++;
        }
    }

    if(kontrol >= strlen(argcv[1]) && kontrol >= strlen(argcv[2]))
    printf("'%s' ve '%s' kelimeleri anagramdir.\n", argcv[1], argcv[2]);

    return 0;
}

