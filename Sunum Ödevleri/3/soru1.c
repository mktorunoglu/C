#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int sifrele(int argc, char *argcv[]){
  for(int i = 0; i < argc; i++){
    switch(i % 4){
      case 1 :
      *argcv[i] = *argcv[i] + 1;
      case 2 :
      *argcv[i] = *argcv[i] + 2;
      case 3 :
      *argcv[i] = *argcv[i] + 3;
      case 0 :
      *argcv[i] = *argcv[i] + 4;
    }
  }
  return 0;
}

int sifreCoz(int argc, char *argcv[]){
  for(int i = 0; i < argc; i++){
    switch(i % 4){
      case 1 :
      *argcv[i] = *argcv[i] - 1;
      case 2 :
      *argcv[i] = *argcv[i] - 2;
      case 3 :
      *argcv[i] = *argcv[i] - 3;
      case 0 :
      *argcv[i] = *argcv[i] - 4;
    }
  }
  return 0;
}

int main(){
  char mesaj[10];
  printf("Mesaj giriniz: ");
  gets(mesaj);
  printf("Mesajiniz sifrelendi: %d", sifrele(10, mesaj[10]));

  char sifreli_mesaj[10];
  printf("Sifrelenmis mesajinizi giriniz: ");
  gets(sifreli_mesaj);
  printf("Mesajiniz cozuldu: %d", sifrele(10, sifreli_mesaj[10]));

  return 0;
}

