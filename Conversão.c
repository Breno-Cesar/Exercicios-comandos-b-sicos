#include <stdio.h>
#include <stdlib.h>


int main() {
	float metro, centimetro;
	printf("Digite a medida em metro: ");
  	scanf("%f",&metro);
  	centimetro = metro*100;
  	printf("%f metros em centimetros = %.1f\n",metro, centimetro);
	return 0;
}