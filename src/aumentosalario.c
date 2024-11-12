#include <stdio.h>
#include "../lib/teste.h"
 int main(){
    float sal;
    printf("Digite o seu salário \n");
    scanf("%f",&sal);
    reajuste (sal);
    return 0;
 }