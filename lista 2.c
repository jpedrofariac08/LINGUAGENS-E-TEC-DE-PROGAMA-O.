#include <stdio.h>
int main()
{
/* 1-calcular ano de nascimento a partir da idade e do ano atual! */

int  idade, anoATUAL;
printf("qual é sua idade? ");
    scanf(" %d", &idade);
printf("em que ano estamos? ");
    scanf(" %d", &anoATUAL);
printf("voce nasceu em: %d  ", anoATUAL - idade);

/* 2-transformar velocidade de km/h para m/s! */

float k, m;
printf("\nqual velocidade a ser convertida? ");
    scanf("%f", &k);
m = k / 3.6;
printf("a velocidade convertida de km/h para m/s: %.2f m/s", m);

/* 3-transformar valor em real para dolar! */
float real, dolar, cotacao;
printf("\ninsira o valor em real: ");
    scanf("%f", &real);
printf("valor da cotacao em dolar agora: ");
    scanf("%f", &cotacao);
dolar = (real / cotacao);
printf("%.2fR$ cotados para o valor em dolar resulta: $%.2f ", real, dolar);

/* 4-transformar celsius para fahrenheit! */
    
float c, f;
    
    printf("\ndigite um valor em graus celsius:");
        scanf("%f", &c);
    f = c * (9.0 / 5.0) + 32;

    printf("a conversao de %.2f°C em fahrenheit é: %.2f°F", c, f);

    /* 5-Leia um ângulo em graus e apresente-o convertido em radianos. */

    float angulo, pi, radianos;
    pi = 3.141592;
    printf("\ndigite um angulo em graus: ");
        scanf("%f", &angulo);
    radianos = angulo * (pi/180);
    printf("o angulo %.2f em radianos vale: %f", angulo, radianos);

    /* 6- Programa que receba um numero inteiro e resulte seu antecessor e sucessor! */

    int n;
    printf("\ndigite um numero: ");
        scanf("%d", &n);
    printf("o antecessor de %d é: %d \n", n, n - 1);
    printf("o sucessor de %d é: %d ", n, n + 1);
    
    /* 7- um concurso tem 780.000 mil de premiação o 1 colocado leva 46%, o segundo leva 32%, e o terceiro leva 22% */

    float premiação;
    premiação = 780000;
    printf("\nO primeiro colocado leva: R$%.2f\n", premiação * 0.46);
    printf("O segundo colocado leva: R$%.2f\n", premiação * 0.32);
    printf("O terceiro colocado leva: R$%.2f\n", premiação * 0.22);

    /* 8- Leia um tempo em segundos de uma operação em uma fabrica, de o tempo em horas, minutos e segundos! */

    int tempo, horas, minutos, segundos;
    printf("insira um valor em segundos: ");
        scanf("%d", &tempo);
    horas = tempo / 3600;
    tempo = tempo % 3600;
    minutos = tempo / 60;
    tempo = tempo % 60;
    segundos = tempo % 60;

    printf("O valor do tempo convertido vale: %d horas, %d minutos, %d segundos", horas, minutos, segundos);
    
    return 0;
}
