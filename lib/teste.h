
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