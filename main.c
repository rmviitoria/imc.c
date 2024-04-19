/******************************************************************************

Sabendo que o IMC (Índice de Massa Corporal) 
é dado pelo peso da pessoa dividido por sua altura ao quadrado, 
crie um programa que solicita que o usuário informe as informações necessárias para o cálculo do IMC. 
Seu programa deve imprimir uma mensagem referente à classificação na qual a pessoa se encontra, de acordo com o que segue:
Menor que 18.5: Abaixo do peso
Entre 18.5 (inclusive) e 25 (não incluindo o 25): Peso normal
Entre 25 (inclusive) e 30 (não incluindo o 30): Pré-obesidade
Entre 30 (inclusive) e 35 (não incluindo o 35): Obesidade Grau 1
Entre 35 (inclusive) e 40 (não incluindo o 40): Obesidade Grau 2
40 ou mais: Obesidade Grau 3


*******************************************************************************/
#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso da pessoa (em kg): ");
    scanf("%f", &peso);
    printf("Digite a altura da pessoa (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc < 18.5) {
        printf("A pessoa está abaixo do peso.\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("A pessoa está com peso normal.\n");
    } else if (imc >= 25 && imc < 30) {
        printf("A pessoa está com pré-obesidade.\n");
    } else if (imc >= 30 && imc < 35) {
        printf("A pessoa está com obesidade Grau 1.\n");
    } else if (imc >= 35 && imc < 40) {
        printf("A pessoa está com obesidade Grau 2.\n");
    } else {
        printf("A pessoa está com obesidade Grau 3.\n");
    }

    return 0; 
}
