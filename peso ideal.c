#include <stdio.h>
#include <stdlib.h>


int main() {
    float h, pi;
    printf("Digite a sua altura em metros: ");
    scanf("%f", &h);
    pi = (72.7*h) - 58;
    printf("O seu peso ideal = %.1f\n", pi);
    return 0;
}