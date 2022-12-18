#include <stdio.h>
#include <stdlib.h>


int main() {
	int n1, n2;
    float n3, p, dn1, mn2, tn1, s, cn3;
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    printf("Digite o terceiro numero: ");
    scanf("%f", &n3);
    dn1 = n1*2;
    mn2 = n2/2;
    p = dn1*mn2;
    tn1 = n1*3;
    s = tn1+n3;
    cn3 = n3*n3*n3;
    printf("O produto do dobro do primeiro com metade do segundo = %.1f\n", p);
    printf("A soma do triplo do primeiro com o terceiro = %.1f\n", s);
    printf("O terceiro elevado ao cubo = %.1f\n", cn3);
    return 0;
}