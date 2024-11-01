#include <stdio.h>
    int main(){
        int valores[]={13,8,23,95,47,14,10,45,165};
        int p ;
        int soma=0;

     for (p = 0; p <9; p++) {
        soma +=valores[p];
      
     }
        printf("a soma é %d \n",soma);
    return 0;
    }