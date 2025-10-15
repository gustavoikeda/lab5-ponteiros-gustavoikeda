#include <stdio.h>
#include <string.h>


char *minha_strcpy(char *destino, const char *origem){
    int tamanho = strlen(origem);
    for(int i = 0; i <= tamanho; i++){
        *(destino + i) = *(origem + i);
    }
    return destino;
}


int main(){
    char str1[50];
    char str2[] = "Teste de copia de string";

    minha_strcpy(str1, str2);
    printf("String copiada: %s\n", str1);

    return 0;
}
