#include <stdio.h>
int main()
{
/* testando maior, igual, diferente! */
    int a,b,c,r,s,t;
a = 10;
b = 1;
c = 0;

r = a > b;
s = a == b;
t = a != b;

printf("%d", r);
printf("\n%d", s);
printf("\n%d\n", t);

/* testando maior, igual, diferente com CLAUSULAS/condicoes! */
    int A,B,C,R;
printf("\ndigite os valores correspondentes a [A], [B], [C]\n");
    scanf("%d %d %d", &A, &B, &C);

if (A > B){
    R = A;
}
else {
    R = B;
}
if (C > R){
    R = C;
}
printf("\n%d eh o maior!\n", R);

/* ler um numero e informar se ele e par ou impar! */

int d,e;
printf("\ndigite os valores correspondentes a [d], [e]\n");
    scanf("%d %d", &d, &e);
if (d % 2){
    printf("\n%d é impar!", d);
}
else{
    printf("\n%d é par!", d);
}
if (e % 2){
    printf("\n%d é impar!", e);
}
else{
    printf("\n%d é par!", e);
}
return 0;
}