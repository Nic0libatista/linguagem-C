#include <stdio.h>
 int main(){ 

// declarar uma variavel para armazenar o primeiro nome de alguém 

    char nome[20];
    printf("Digite o seu nome e tecle enter \n");
    // foi necessário utilizar colchetes para que o comando
    // scanf receba toda a cadeia de caracteres.
    // o elemento ^(circunflexo) foi usado para indicar onde
    // começa o primeiro caracter. e comando \n, nesse caso
    // está sendo usado para ler o espaço aplicado 
    // ao dinal é utilizado o caracter s (string).
    scanf("%[^\n]s", &nome);
    printf("olá, %s, seja bem vindo(a) \n",nome);
   

    return 0;
 }