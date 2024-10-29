#include <stdio.h>
   int main () {
     int n;
     printf("Digite um numeo e tecle enter\n");
     scanf("%d",&n);
      if(n % 2 == 0) {
        printf("O valor %d é par \n",n);
     }
    else {
        printf("O numero %d é impar\n",n);
    }
     return 0;
   } 