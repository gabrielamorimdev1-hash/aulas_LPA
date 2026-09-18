#include <stdio.h>

int main(void){

    float nota1;
    float nota2;
    float nota3;
    float faltas;


    printf("digite sua nota: ");
    scanf("%f", &nota1);
    printf("digite sua nota: ");
    scanf("%f", &nota2);
    printf("digite sua nota: ");
    scanf("%f", &nota3);


    if (nota1 + nota2 + nota3 >= 21){
        printf("voce passou");
    } else {
        printf("voce foi reprovado");
    }

    return 0;
}
