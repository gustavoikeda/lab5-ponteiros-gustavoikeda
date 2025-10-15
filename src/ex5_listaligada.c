#include <stdio.h>
#include <stdlib.h>

typedef struct No{
    int valor;
    struct No *proximo;
} No;

No* criar_no(int valor){
    No *novo_no = (No*) malloc(sizeof(No));

    novo_no-> valor = valor;
    novo_no-> proximo = NULL;
    
    return novo_no;
}

No* inserir_inicio(No *cabeca, int valor){
    No *novo_no = criar_no(valor);
    novo_no-> proximo = cabeca;

    return novo_no;
}

void imprimir_lista(No *cabeca){
    No *atual = cabeca;
    while(atual != NULL)
    {
        printf("%d ", atual-> valor);

        atual = atual->proximo;
    }
}

void liberar_lista(No *cabeca){
    No *atual = cabeca;
    No *proximo_no;
    while(atual != NULL)
    {
        proximo_no = atual-> proximo;
        free(atual);
        atual = proximo_no;
    }
}

int main(){
    No *lista = NULL;

    lista = inserir_inicio(lista, 10);
    lista = inserir_inicio(lista, 20);
    lista = inserir_inicio(lista, 30);

    printf("Lista: ");
    imprimir_lista(lista);

    liberar_lista(lista);

    return 0;
}
