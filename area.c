#include <stdio.h>

int main() {
    double comprimento, largura, area;

    printf("Digite o comprimento da sala: ");
    scanf("%lf", &comprimento);

    printf("Digite a largura da sala: ");
    scanf("%lf", &largura);

    area = comprimento * largura;

    printf("Área da sala: %.2lfm²\n", area);

    return 0;
}