#include <stdio.h>
#include <stdlib.h>


int main() {
	float raio, area;
	printf("Digite a medida do raio: ");
  	scanf("%f",&raio);
  	area = 3.14*(raio*raio);
  	printf("Area do circulo = %.2f\n", area);
	return 0;
}