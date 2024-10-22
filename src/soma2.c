#include <stdio.h>
  int n1;
  int n2;
  int rs;

int main(){
printf("Digite um numero:\n");
// Alocar o numero digitado pelo usuario no
// endereço de memoria da variavel n1
scanf("%d",&n1);
printf("Digite outro numero:\n");
scanf("%d",&n2);
// Realizar a soma ente n1 e n2
rs = n1+n2;
// Exibir o resultado da soma
printf("O resultado é %d\n",rs);
return 0;
}