#include <stdio.h>
// o comando ../ faz a saida da pasta atual (src)
// e lib é onde está o arquivo de cabeçario calculos.h
#include "../lib/calculos.h"

int main(){
    int valores[] = {5,23,5,7,10,4,12,30};
    printf("O resultado da soma é %d\n",somaarray(valores, 8));
    printf("O resultado da media é %d\n",mediaarray(valores, 8));
    printf("O maior valor é %d\n",maiorvalor(valores, 8));
    return 0;

}      