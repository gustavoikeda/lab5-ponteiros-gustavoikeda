#include <stdio.h>
#include <stdlib.h>

int main(){
    int **matriz;
    int linhas, colunas;

    printf("Digite o numero de linhas: ");
    scanf("%d", &linhas);
    printf("Digite o numero de colunas: ");
    scanf("%d", &colunas);

    matriz = (int**) malloc(linhas * sizeof(int*));

    for(int i = 0; i < linhas; i++){
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    printf("Digite os valores da matriz: ");
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");
    for(int i = 0; i < linhas; i++)
    {
        for(int j = 0; j < colunas; j++)
        {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
