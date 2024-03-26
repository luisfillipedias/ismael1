#include <stdio.h>

int main() {
    int numero, somaTotal = 0, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0;

    while(numero >= 0) {
        printf("\nDigite um valor positivo ou negativo para terminar o programa:");
        scanf("%d", &numero);
        somaTotal += numero;

        if(numero >= 0 && numero <= 25) {
            faixa1++;
        } else if(numero >= 26 && numero <= 50) {
            faixa2++;
        } else if(numero >= 51 && numero <= 75) {
            faixa3++;
        } else if(numero >= 76 && numero <= 100) {
            faixa4++;
        } else if(numero > 100) {
            printf("Numero maior que 100\n");
        }
    }

    printf("\n\nTotal de números de 0 a 25: %d", faixa1);
    printf("\nTotal de números de 26 a 50: %d", faixa2);
    printf("\nTotal de números de 51 a 75: %d", faixa3);
    printf("\nTotal de números de 76 a 100: %d", faixa4);

    return 0;
}
