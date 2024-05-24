#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(0,"Portuguese");

    unsigned int idade = 31;
    char nome1[] = "Zé";
    char *nome2 = "Ana";
    float media = 9.5;

    printf("%i - %s - %s - %.2f", idade, nome1, nome2, media);
    printf("\n");

    system("pause");
}
