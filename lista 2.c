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

}