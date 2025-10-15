#include <stdio.h>
#include <stdlib.h>

int main(){
    int *vetor;
    int tamanho;
    float media = 0;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    vetor = (int*) malloc(tamanho * sizeof(int));

    if(vetor == NULL){
        printf("Erro: Memoria insuficiente!\n");
        return 1;
    }

    printf("Digite os %d valores:\n", tamanho);
    for(int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
        media +=vetor[i];
    }

    media = media/tamanho;

    printf("Media dos valores: %.2f\n", media);

    free(vetor);

    return 0;
}
