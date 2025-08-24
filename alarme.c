#include <stdio.h>

int main() {
    int x, y; 
    int maior, menor; 
    int mmc;

    printf("Digite o intervalo de horas do primeiro alarme (x): ");
    scanf("%d", &x);

    printf("Digite o intervalo de horas do segundo alarme (y): ");
    scanf("%d", &y);

    if(x > y) {
        maior = x;
        menor = y;
    } else {
        maior = y;
        menor = x;
    }

    mmc = maior;

    while(1) {
        if(mmc % menor == 0) {
            printf("\nO tempo mínimo para os dois alarmes dispararem simultaneamente é: %d horas.\n", mmc);
            break;
        }

        mmc = mmc + maior;
    }

    return 0;
}
