#include <stdio.h>
#include <stdlib.h>

/* 1- Leia 2 numeros inteiros e escreva na ordem inversa! */

int main(int argc, char *argv[]) {
	
	int primeiro, segundo, aux;

	printf("insira o primeiro valor: \n");
	scanf("%d", &primeiro);

	printf("insira o segundo valor: \n");
	scanf("%d \n", &segundo);
	
	aux = primeiro;
	primeiro = segundo;
	segundo = aux;
	
	printf(" %d \n %d\n", primeiro, segundo);
	
	/* 2- Faça um programa que leia um valor do tipo double e depois imprima na forma de notação cientifica! */
	
	double valor;
	
	printf("insira um valor: \n");
	scanf("%lf \n", &valor);
	
	printf("em notacao cientifica: %e \n", valor);
	
	/* 3- Implemente um programa que leia um numero n e mostre na tela o seu valor em base binaria(bits)! */


	
	/* 5- Elabore um programa que peça ao usuario digitar 4 valores, e mostre na tela a soma, a media e o produtorio dos 4 valores! */
	
	float num1, num2, num3, num4, soma, media, produtorio;

	
	printf("insira o primeiro valor: \n");
	scanf("%f \n", &num1);
	
	printf("insira o segundo valor: \n");
	scanf("%f \n", &num2);
	
	printf("insira o terceiro valor: \n");
	scanf("%f \n", &num3);
	
	printf("insira o quarto valor: \n");
	scanf("%f \n", &num4);
	
	soma = num1 + num2 + num3 + num4;
	media = ((num1 + num2 + num3 +num4)/4);
	produtorio = num1 * num2 * num3 * num4;
	printf("a soma dos numeros vale: %f \n", soma);
	printf("a media dos numeros vale: %f \n", media);
	printf("o produtorio dos numeros vale: %f \n", produtorio);
	return 0;
}
