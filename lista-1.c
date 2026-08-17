#include <stdio.h>
#include <stdlib.h>

/* 1- Leia 2 numeros inteiros e escreva na ordem inversa! */

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;

	printf("insira o primeiro valor: \n");
	scanf("%d", &primeiro);

	printf("insira o segundo valor: \n");
	scanf("%d", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf(" %d \n %d\n", primeiro, segundo);
	
	/* 2- Faça um programa que leia um valor do tipo double e depois imprima na forma de notação cientifica! */
	
	double valor;
	
	printf("insira um valor: \n");
	scanf("%lf", &valor);
	
	printf("em notacao cientifica: %e \n", valor);
	
	/* 3- Implemente um programa que leia um numero n e mostre na tela o seu valor em base binaria(bits)! */
	
    int n;
int resto;
int bits[10];
int contador = 0;

printf("Digite um numero: ");
scanf("%d", &n);

while (n > 0) {
    resto = n % 2;
    bits[contador] = resto;
    contador++;

    n = n / 2;
}

int i;

printf("A conversao para binario resulta: ");

for (i = 6; i >= 0; i--) {
    if (i < contador)
        printf("%d", bits[i]);
    else
        printf("0");
}

printf("\n");


printf("a conversao para binario resulta: ");
for (i = contador - 1; i >= 0; i--) {
    printf("%d", bits[i]);
}
printf("\n");
	
    /* 4- Faça um programa que leia, o salário fixo e o valor total em vendas de um vendedor.
    Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, mostre o total a
    receber no final do mês, com duas casas decimais. */
    
    float salario, vendas, salarioTOTAL;
    
    printf("insira o valor do salario: \n");
        scanf("%f", &salario);

    printf("insira o valor total de vendas do vendedor: \n");
        scanf("%f", &vendas);

        salarioTOTAL = salario + (vendas * 0.15);
        printf ("o salario total equivale: %f \n", salarioTOTAL);
	
	/* 5- Elabore um programa que peça ao usuario digitar 4 valores, e mostre na tela a soma, a media e o produtorio dos 4 valores! */
	
	float num1, num2, num3, num4, soma, media, produtorio;

	
	printf("\n insira o primeiro valor: \n");
	scanf("%f", &num1);
	
	printf("insira o segundo valor: \n");
	scanf("%f", &num2);
	
	printf("insira o terceiro valor: \n");
	scanf("%f", &num3);
	
	printf("insira o quarto valor: \n");
	scanf("%f", &num4);
	
	soma = num1 + num2 + num3 + num4;
	media = ((num1 + num2 + num3 +num4)/4);
	produtorio = num1 * num2 * num3 * num4;
	printf("a soma dos numeros vale: %f \n", soma);
	printf("a media dos numeros vale: %f \n", media);
	printf("o produtorio dos numeros vale: %f \n", produtorio);
	
	/* 6- Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias. */
	
	int diasdevida, anos, meses, dias;
    
    printf("insira quantos dias de vida voce tem:");
    scanf("%d", &diasdevida);
    anos = diasdevida / 365;
    diasdevida = diasdevida % 365;
    meses = diasdevida / 30;
    dias = diasdevida % 30;

    printf("voce tem: %d anos, %d meses, %d dias de vida", anos, meses, dias);
	
	
	
	
	
	
	return 0;
}
