#include <stdio.h>

int main() {
    int tamanho;
    scanf("%d", &tamanho);

    int arr[tamanho];
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &arr[i]);
    }

    int maior = arr[0], segundoMaior = arr[0];
    int posicaoMaior = 0, posicaoSegundoMaior = 0;

    for (int i = 1; i < tamanho; i++) {
        if (arr[i] > maior) {
            segundoMaior = maior;
            posicaoSegundoMaior = posicaoMaior;
            maior = arr[i];
            posicaoMaior = i;
        } else if (arr[i] > segundoMaior && arr[i] != maior) {
            segundoMaior = arr[i];
            posicaoSegundoMaior = i;
        }
    }

    printf("%d %d\n", posicaoSegundoMaior, segundoMaior);

    return 0;
}
