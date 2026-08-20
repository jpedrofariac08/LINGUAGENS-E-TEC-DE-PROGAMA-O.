#include <stdio.h>
#include <stdlib.h>
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
    
float cl, f;
    
    printf("\ndigite um valor em graus celsius:");
        scanf("%f", &cl);
    f = cl * (9.0 / 5.0) + 32;

    printf("a conversao de %.2f°C em fahrenheit é: %.2f°F", cl, f);

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

    /* 9- Programa que faça o calculo de distancia em km, tempo, velocidade e gasto de gasolina */
    
    float velocidade, tempo1;
    printf("\ninsira o tempo da viagem em horas: ");
        scanf("%f", &tempo1);
    printf("insira a velocidade em km/h: ");
        scanf("%f", &velocidade);
    printf("a distancia percorrida durante a viagem vale: %.2fKM\n", tempo1 * velocidade);
    printf("o gasto em litros durante a viagem foi de: %.3f litros", (tempo1 * velocidade) / 12);

    /* 10- Faça um programa que leia  valores e apresente o maior dos 3 valores seguido da mensagem "eh o maior"!*/
    
    int a, b, c, maior_temp, maior;
    printf(" \ninforme os valores a serem comparados:\n");
        scanf("%d %d %d", &a, &b, &c);
    maior = (a + b + abs (a-b))/2;
    maior_temp = (maior + c +abs (maior-c))/2;
    printf(" entre  os numeros %d, %d, %d, o maior entre eles vale = %d\n", a, b, c, maior_temp);

    /* 11- Faça um programa que leia  valores e apresente o maior dos 4 valores seguido da mensagem "eh o maior"!*/
    
    int a1, b1, c1, d1, maior1, maiortemp, maior2;
    printf(" \ninforme os valores a serem comparados:\n");
        scanf("%d %d %d %d", &a1, &b1, &c1, &d1);
    maior1 = (a1 + b1 + abs (a1-b1))/2;
    maior2 = (c1 + d1 + abs (c1-d1))/2;
    maiortemp = (maior1 + maior2 + abs(maior1-maior2))/2;
    printf(" entre  os numeros %d, %d, %d, %d, o maior entre eles vale = %d", a1, b1, c1, d1, maiortemp);
    
    return 0;
}
