#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argcv[] )
{
    int i, t, p_kontrol, p_sayac;
    p_sayac = 0;

    for(i = 1; i < argc; i++){
        p_kontrol = 0;

        for(t = 0; t < strlen(argcv[i]); t++){
            if ( *(argcv[i] + t) == *(argcv[i] + strlen(argcv[i]) - 1 - t) )
            p_kontrol++;
        }

        if (strlen(argcv[i]) == p_kontrol){
            printf("%s kelimesi palindromdur.\n", argcv[i]);
            p_sayac++;
        }
    }

    printf("%d tane palindrom kelime vardir.", p_sayac);
    return 0;
}

