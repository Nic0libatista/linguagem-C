#include <stdio.h> 
    int main () {
        int ano;

        printf("Digite um ano e tecle enter \n");
        scanf("%d",&ano);
    if (ano % 4 == 0) {
        printf("o ano %d é bissexto \n",ano);
    }
    else {
        printf(" %d não é um ano bissexto \n", ano);
    }
    return 0;
    }