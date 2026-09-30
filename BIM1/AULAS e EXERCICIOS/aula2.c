#include <stdio.h>
#include <stdlib.h>

/* soma, subtracao, multiplicacao e divisao de 2 variaveis! */

int main(int argc, char *argv[]) {
	
	int a,b,c,d,e,f,g,h;
	
	a = 8;
	b = 19;
	c = a+b;
	d = a-b;
	e = a*b;
	f = 4;
	g = 2;
	h = f/g;
	
	printf ("a soma de %d + %d = %d\n", a,b,c);
	
	printf ("a subtracao de %d - %d = %d\n", a,b,d);
	
    printf ("a multiplicacao de %d * %d = %d\n", a,b,e);
    
    printf ("a divisao de %d / %d = %d\n", f,g,h);
    
	return 0;
}
