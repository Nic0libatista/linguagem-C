
#include <stdio.h>
int maiorvalor(int n[], int qtd){
    int m = n[0];
    int i;

    for (i = 1; i < qtd; i++){
        if (n[i]>m){
       m = n[i];
        } 
        
    }
    return m; 
}


char sexo(char letra){
    if (letra == 'f' || letra == 'F' ) {
        printf("Feminino");
    }
    else if (letra == 'm'  || letra == 'M') {
        printf("masculino");
    }
    else {
        printf("inexistente");
    }
    

}

void vogal(char letra){
    if (letra == 'a'){
        printf ("%c é vogal",letra);
    }
    else if (letra == 'e'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'i'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'o'){
        printf ("%c é vogal",letra);
    }
       else if (letra == 'u'){
        printf ("%c é vogal",letra);
    }
    else {
        printf("%c Nâo é vogal",letra);
    }

}



