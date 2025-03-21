#include<stdio.h>

void imprimeVetor(int *vetor, int tamanho) {
    for(int i = 0; i < tamanho; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void montaVetor(int *vetor, int tamanho) {
    
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }
}

void ordenaBubble (int *v, int n, int x) {
    int aux;
    
    if (n == 1) return;

    for(int i = 0; i < n-1; i++)
    {
        if(v[i] > v[i+1])
        {
            aux = v[i];
            v[i] = v[i+1];
            v[i+1] = aux;
        }
    }

    imprimeVetor(v, x);
    ordenaBubble(v, n-1, x);

}


int main (){
    int tamanho, tamanhoIt;
    scanf("%d", &tamanho);
    tamanhoIt = tamanho;
    int vetor[tamanho];
    montaVetor(vetor, tamanho);

    ordenaBubble(vetor, tamanho, tamanhoIt);
    return 0;

}