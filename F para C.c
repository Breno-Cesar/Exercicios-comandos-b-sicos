#include <stdio.h>
#include <stdlib.h>


int main() {
	float F, C;
	printf("Digite a temperatura em Farenheit: ");
  	scanf("%f",&F);
    C = (5*(F-32)/9);
  	printf("%f Farenheit em Celsius = %.2f\n", F, C);
	return 0;
}