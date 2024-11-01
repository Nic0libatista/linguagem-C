#include <stdio.h>
    int main(){
        int valores[]={13,8,23,95,47,14,10,45,165};
        int p ;
        float soma=0;
        float divisao=0;

     for (p = 0; p <9; p++) {
        soma +=valores[p];
        divisao = soma / 9;
      
     }
        printf("a media é %.2f \n",divisao);
    return 0;
    }