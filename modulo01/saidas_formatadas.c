#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    // para imprimir um n�mero inteiro usa-se %d ou %i
    printf("%d",400);
    printf("\n");
    printf("%i",400);
    printf("\n");

    // para imprimir uma string usa-se %s
    printf("%s", "Jeiverson");
    printf("\n");

    // misturando os dois tipos
    printf("%s tem %i anos de idade.", "Jeiverson", 31);
    printf("\n");

    // floats
    printf("Seu atual peso � de %f kg", 94.5);
    printf("\n");
    printf("Digo, � de %.2f kg", 94.5);
    printf("\n");

    system("pause");
}
