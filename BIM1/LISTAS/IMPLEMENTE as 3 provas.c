#include <stdio.h>

/* ================= PROVA A ================= */

void provaA() {
    int questao;

    printf("\n===== PROVA A =====\n");
    printf("0 - Numeros impares e multiplos de 5\n");
    printf("1 - Mochilas\n");
    printf("2 - Conversao de unidades\n");

    printf("\nEscolha a questao: ");
    scanf("%d", &questao);

    if (questao == 0) {

        int n1, n2, n3, n4;

        printf("Digite 4 numeros inteiros: ");
        scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

        if (n1 % 2 != 0 && n1 % 5 == 0)
            printf("%d\n", n1);

        if (n2 % 2 != 0 && n2 % 5 == 0)
            printf("%d\n", n2);

        if (n3 % 2 != 0 && n3 % 5 == 0)
            printf("%d\n", n3);

        if (n4 % 2 != 0 && n4 % 5 == 0)
            printf("%d\n", n4);
    }

    else if (questao == 1) {

        int itens, capacidade;

        printf("Digite a quantidade de itens: ");
        scanf("%d", &itens);

        printf("Digite a capacidade da mochila: ");
        scanf("%d", &capacidade);

        printf("Mochilas preenchidas: %d\n", itens / capacidade);
    }

    else if (questao == 2) {

        float valor, resultado;
        int origem, destino;

        printf("\n===== TABELA DE CONVERSOES =====\n");
        printf("1  - Celsius (C) -> Fahrenheit (F)\n");
        printf("2  - Fahrenheit (F) -> Celsius (C)\n");
        printf("3  - Celsius (C) -> Kelvin (K)\n");
        printf("4  - Metro (m) -> Milha (mi)\n");
        printf("5  - Milha (mi) -> Metro (m)\n");
        printf("8  - Quilograma (kg) -> Libra (lb)\n");
        printf("9  - Libra (lb) -> Quilograma (kg)\n");
        printf("10 - km/h -> mph\n");
        printf("11 - mph -> km/h\n");
        printf("================================\n");

        printf("Digite o valor: ");
        scanf("%f", &valor);

        printf("Digite o codigo de origem: ");
        scanf("%d", &origem);

        printf("Digite o codigo de destino: ");
        scanf("%d", &destino);

        if (origem == 1 && destino == 2) {
            resultado = valor * 1.8 + 32;
            printf("Resultado: %.2f F\n", resultado);
        }
        else if (origem == 2 && destino == 1) {
            resultado = (valor - 32) / 1.8;
            printf("Resultado: %.2f C\n", resultado);
        }
        else if (origem == 1 && destino == 3) {
            resultado = valor + 273.15;
            printf("Resultado: %.2f K\n", resultado);
        }
        else if (origem == 3 && destino == 1) {
            resultado = valor - 273.15;
            printf("Resultado: %.2f C\n", resultado);
        }

        else if (origem == 4 && destino == 5) {
            resultado = valor / 1609.34;
            printf("Resultado: %.2f mi\n", resultado);
        }
        else if (origem == 5 && destino == 4) {
            resultado = valor * 1609.34;
            printf("Resultado: %.2f m\n", resultado);
        }
        else if (origem == 8 && destino == 9) {
            resultado = valor * 2.205;
            printf("Resultado: %.2f lb\n", resultado);
        }
        else if (origem == 9 && destino == 8) {
            resultado = valor / 2.205;
            printf("Resultado: %.2f kg\n", resultado);
        }
        else if (origem == 10 && destino == 11) {
            resultado = valor * 1.609;
            printf("Resultado: %.2f km/h\n", resultado);
        }
        else if (origem == 11 && destino == 10) {
            resultado = valor / 1.609;
            printf("Resultado: %.2f mph\n", resultado);
        }
        else {
            printf("Conversao invalida!\n");
        }
    }
    else {
        printf("Questao invalida!\n");
    }
}

/* ================= PROVA B ================= */

void provaB() {
    int questao;

    printf("\n===== PROVA B =====\n");
    printf("0 - Numeros consecutivos\n");
    printf("1 - IMC\n");
    printf("2 - Torre de Hanoi\n");

    printf("\nEscolha a questao: ");
    scanf("%d", &questao);

    if (questao == 0) {

        int n1, n2, n3, n4, n5;

        printf("Digite 5 numeros inteiros: ");
        scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

        if (n2 == n1 + 1){
            printf("%d e %d sao consecutivos\n", n1, n2);
        }
        if (n3 == n2 + 1){
            printf("%d e %d sao consecutivos\n", n2, n3);
        }
        if (n4 == n3 + 1){
            printf("%d e %d sao consecutivos\n", n3, n4);
        }
        if (n5 == n4 + 1){
            printf("%d e %d sao consecutivos\n", n4, n5);
        }
    }

    else if (questao == 1) {

        float peso, altura, imc;

        printf("Digite o peso: ");
        scanf("%f", &peso);

        printf("Digite a altura: ");
        scanf("%f", &altura);

        imc = peso / (altura * altura);

        printf("IMC: %.2f\n", imc);

        if (imc < 18.5){
            printf("Abaixo do peso\n");
        }
        else if (imc <= 24.9){
            printf("Normal\n");
        }
        else if (imc <= 29.9){
            printf("Acima do peso\n");
        }
        else{
            printf("Obeso\n");
        }
    }
    else if (questao == 2) {

        printf("\nMovimentos da Torre de Hanoi:\n");

        printf("Disco 1: A -> C\n");
        printf("Disco 2: A -> B\n");
        printf("Disco 1: C -> B\n");
        printf("Disco 3: A -> C\n");
        printf("Disco 1: B -> A\n");
        printf("Disco 2: B -> C\n");
        printf("Disco 1: A -> C\n");
    }
    else {
        printf("Questao invalida!\n");
    }
}

int main() {

    int prova;

    printf("================================\n");
    printf("       Provas A, B e C\n");
    printf("================================\n");

    printf("\n1 - Prova A\n");
    printf("2 - Prova B\n");
    printf("3 - Prova C\n");

    printf("\nEscolha a prova: ");
    scanf("%d", &prova);

    switch (prova) {

        case 1:
            provaA();
            break;

        case 2:
            provaB();
            break;

        case 3:
            provaC();
            break;
    }

    return 0;
}
