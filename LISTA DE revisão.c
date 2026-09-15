#include <stdio.h>
#include <stdlib.h>

void exercicio_1(){
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11;
    int soma1, soma2, digito1, digito2;

    printf("digite o cpf com espacos entre cada numero:");
    scanf("%d %d %d %d %d %d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);
    printf("CPF recebido: %d%d%d%d%d%d%d%d%d%d%d\n", num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11);

    soma1 = (num1 * 10) + (num2 * 9) + (num3 * 8) + (num4 * 7) + (num5 * 6) + (num6 * 5) + (num7 * 4) + (num8 * 3) + (num9 * 2);
    digito1 = (soma1 * 10) % 11;
    if (digito1 == 10){
        digito1 = 0;
    }

    soma2 = (num1 * 11) + (num2 * 10) + (num3 * 9) + (num4 * 8) + (num5 * 7) + (num6 * 6) + (num7 * 5) + (num8 * 4) + (num9 * 3) + (num10 * 2);
    digito2 = (soma2 * 10) % 11;
    if (digito2 == 10){
        digito2 = 0;
    }

    if (digito1 == num10 && digito2 == num11){
        printf("CPF Valido!\n");
    } else {
        printf("CPF Invalido\n");
    }
}

float calc_fahrenheit(float C){
    return (C * 9.0f / 5.0f) + 32.0f;
}

float calc_celsius(float F){
    return (F - 32.0f) * 5.0f / 9.0f;
}

void exercicio_2(){
    float C, F, escolha;

    printf("Voce quer fazer qual conversao:\n");
    printf("1 - Celsius ---> Fahrenheit\n");
    printf("2 - Fahrenheit ---> Celsius\n");

    scanf("%f", &escolha);

    if (escolha == 1){
        printf("Digite a temperatura em Celsius: ");
        scanf("%f", &C);
        printf("A conversao resulta: %.2f\n", calc_fahrenheit(C));
    } else if (escolha == 2){
        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%f", &F);
        printf("A conversao resulta: %.2f\n", calc_celsius(F));
    }
}
void exercicio_3(){
    float calc_notas(float nota1, float nota2, float nota3){
    return ((nota1 + nota2 + nota3) / 3.0);
}

{
    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = calc_notas(nota1, nota2, nota3);

    printf("\n--- RESULTADO FINAL ---\n");
    printf("Media: %.1f\n", media);

    if (media >= 70.0 && media <=100){
        printf("\033[34mAprovado\033[0m\n");
    } 
    else if (media >= 40.0 && media < 70.0){
        float falta = 100.0 - media;
        printf("\033[32mExame\033[0m\n");
        printf("Faltam %.1f pontos para atingir 10.0.\n", falta);
    } 
    else {
        printf("\033[31mReprovado\033[0m\n");
    }
}
}
int main(){
    int op;

    printf("qual exercicio voce quer resolver:");
    scanf("%d", &op);

    switch(op){
        case 1:
            exercicio_1();
            break;
        case 2:
            exercicio_2();
            break;
        case 3:
            exercicio_3();
            break;
    }

    return 0;
}
