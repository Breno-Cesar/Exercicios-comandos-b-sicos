#include <stdio.h>
#include <stdlib.h>


int main() {
	float lado, area, dobro;
	printf("Digite a medida do lado: ");
  	scanf("%f",&lado);
  	area = lado*lado;
  	printf("Area do circulo = %.2f\n", area);
    dobro = area*2;
    printf("O dobro da area do quadrado = %.2f\n", dobro);
	return 0;
}