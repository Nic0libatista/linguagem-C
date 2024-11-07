#include <stdio.h>



int main (){
    int devolveresto(int valor, int div);
    printf("O resto entre os numeros 2 e 5 é %d\n",devolveresto(2,5));
    return 0;
}

int devolveresto(int valor, int div){
    return valor % div;
}