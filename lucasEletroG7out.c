#include <stdio.h>

int main() {

    float peso;
    float altura;
    float imc; 

    printf("Informe seu peso: ");
    scanf("%f", &peso);

    printf("Informe sua altura: ");
    scanf("%f", &altura);

    imc = peso/(altura*altura);
    printf("%f",imc);
 
}