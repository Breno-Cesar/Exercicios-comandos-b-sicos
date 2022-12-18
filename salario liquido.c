#include <stdio.h>
#include <stdlib.h>


int main() {
	float ganho, horas, sb, sinss, ssind, simp, sl;
	printf("Digite o valor ganho por hora: ");
  	scanf("%f",&ganho);
    printf("Digite a quantidade de horas trabalhadas no mes: ");
  	scanf("%f",&horas);
    sb = ganho*horas;
    sinss = sb*0.08;
    ssind= sb*0.05;
    simp = sb*0.11;
    sl= sb-(sinss+ssind+simp);
    printf("O seu salario bruto = %.2f reais\n", sb);
    printf("Foram descontados %.2f reais pelo INSS\n", sinss);
    printf("Foram descontados %.2f reais pelo sindicato\n", ssind);
    printf("O seu salario liquido = %.2f reais\n", sl);
	return 0;
}