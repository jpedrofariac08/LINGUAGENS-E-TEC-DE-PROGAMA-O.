#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
/* calculo da area de raio */

int main(int argc, char *argv[]) {

float area, areaB, raio, r2, B, b, h;

printf("insira o raio do circulo:\n");
scanf("%f" , &raio);
r2 = raio*raio;
raio *= raio;
area = pi*r2;

printf("A area do circulo de raio %f = %f", raio, area);

printf("agora a do trapezio\n");

printf("insira a base maior do trapezio:\n");
scanf("%f", &B);

printf("insira a base menor do trapezio:\n");
scanf("%f", &b);

printf("insira a altura do trapezio:\n");
scanf("%f", &h);

areaB = ((B+b)*h / 2);
printf("A area do trapezio: %f", areaB);
	return 0;
}
