#include <stdio.h>
#include <stdlib.h>


int main() {
	float C, F;
	printf("Digite a temperatura em Celsius: ");
  	scanf("%f",&C);
    F = (C*1.8) + 32;
  	printf("%f Celsius para Farenheit  = %.2f\n", C, F);
	return 0;
}