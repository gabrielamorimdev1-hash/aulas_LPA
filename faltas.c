#include <stdio.h>

int main(void){

    float faltas;

    printf("quantas faltas o aluno possui: ");
    scanf("%f", &faltas);

    if (faltas < 15) {
        printf("aluno aprovado");

    } else {
        printf("reprovado");
    }


    return 0;
}