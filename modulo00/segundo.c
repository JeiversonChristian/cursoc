#include <stdio.h>
void main(){
    char nome[10];
    printf("Qual eh o seu nome? ");
    scanf("%s", &nome);
    printf("Muito prazer em te conhecer, %s", nome);
}
