#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    srand(time(NULL));

    char caracteres[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%%^&*()";
    int i, size;

    printf("Digite o tamanho da senha:\n");
    scanf("%d", &size);
    if(size <= 0){
        printf("Tamanho Invalido.\n");
        return 1;
    }

    printf("===Senha Gerada===\n");
    for(i = 0; i < size; i++){
        printf("%c", caracteres[rand()%72]);
    }
    printf("\n");
    
    return 0;
}