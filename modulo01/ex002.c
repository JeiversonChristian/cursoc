#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese");

    printf("<<< EX002 - Especiais >>>\n");
    printf("\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t=\t\tBeep\n");
    printf("\\n\t=\t\tNova linha\n");
    printf("\\t\t=\t\tTabulação\n");
    printf("\\\\\t=\t\tBarra\n");
    printf("%%%%\t=\t\tPorcentagem\n");
    printf("\\?\t=\t\tInterrogação\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    system("pause");
}
