#include <stdio.h>
#include <stdlib.h>


int main() {
	float ganho, horas, salario;
	printf("Digite o valor ganho por hora: ");
  	scanf("%f",&ganho);
    printf("Digite a quantidade de horas trabalhadas no mes: ");
  	scanf("%f",&horas);
    salario = ganho*horas;
    printf("O seu salario mensal = %.2f\n", salario);

	return 0;
}