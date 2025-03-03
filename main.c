#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void generatePassword(int size){
    srand(time(NULL));

    char caracteres[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%%^&*()";
    char password[128];
    int i, size, maxSize = 128, minSize = 16;


    printf("Type the size of the password:\n");
    scanf("%d", &size);

    if(size > maxSize){
        printf("Password too big.\nGenerating with %d characteres\n", &maxSize);
        size = maxSize;
    } else if(size <= 0){
        printf("invalid size.\nGenerating wiht %d characteres\n", &minSize);
        size = minSize;
    }

    printf("===Senha Gerada===\n");
    for(i = 0; i < size; i++){
        password[i] = caracteres[rand()%72]
        printf("%c", password[i]);
    }
    printf("\n");
    
    return 0;
}

int main(){
    
}