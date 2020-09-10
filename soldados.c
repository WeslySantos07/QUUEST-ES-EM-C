#include <stdio.h>

double media(double vet[], int tam){
    double media, soma = 0;
    for(int i = 0; i < tam; i++){
        soma += vet[i];
    }
    media = (double) soma / tam;
    
    return media;
}


int main(){
    int qtd;
    scanf("%d",&qtd);
    double vetor[qtd], resultado = 0;
    for(int j = 0; j < qtd; j++){
        scanf("%lf", &vetor[j]);
    }   
    resultado = media(vetor, qtd);
    if(qtd > 1){
        printf("%.2f\n",resultado);
    }
    for(int j = 0; j < qtd; j++){
        if(vetor[j] < resultado){
            printf("P");
        }
        else if(vetor[j] == resultado){
            printf("M");
        }
        else{
            printf("G");
        }
        if(j+1 == qtd){
            printf("\n");
        }
        else{
            printf(" ");
        }
    }
}
