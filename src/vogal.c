#include <stdio.h>
#include "../lib/teste.h"
 int main(){ 
    char letra;
    printf("digite uma letra e descubra se é vogal\n");
    scanf("%c",&letra);
    vogal(letra);
    printf("\n");
    
return 0;
 }