#include <stdio.h>

int main() {
    char opcao = ' ';

    while(opcao != 's' && opcao != 'S') {
        printf("-----------------------------------------\n");
        system("cls");
        float numero1, numero2, soma, subtracao, divisao, multiplicacao;
        printf("-----------------------------------------\n");
        printf(" MENU DE OPERACOES \n");
        printf("-----------------------------------------\n");
        printf("Digite + para adicionar \n");
        printf("Digite - para retirar \n");
        printf("Digite / para dividir \n");
        printf("Digite x para multiplicar\n");
        printf("Digite S para sair do programa\n");
        printf("-----------------------------------------\n\n");
        printf("\n Informe a operacao que deseja realizar: ");
        scanf(" %c", &opcao);

        switch (opcao) {
            case('+'):
                printf("\nADICAO \n Informe o primeiro numero: ");
                scanf("%f", &numero1);
                printf("\n Informe o segundo numero: ");
                scanf("%f", &numero2);
                soma = numero1 + numero2;
                printf("\n A adicao de %.2f + %.2f e igual a: %f\n", numero1, numero2, soma);
                break;

            case('x'):
                printf("\nMULTIPLICACAO \n Informe o primeiro numero:\n");
                scanf("%f", &numero1);
                printf("\n informe o segundo numero:\n");
                scanf("%f", &numero2);
                multiplicacao = numero1 * numero2;
                printf("\n A multiplicacao de %.2f x %.2f e igual a: %.2f\n", numero1, numero2, multiplicacao);
                break;

            case('-'):
                printf("\nSUBTRACAO \n Informe o primeiro numero: ");
                scanf("%f", &numero1);
                printf("\n Informe o segundo numero: ");
                scanf("%f", &numero2);
                subtracao = numero1 - numero2;
                printf("\n A subtracao de %.2f - %.2f e igual a: %.2f\n", numero1, numero2, subtracao);
                break;

            case('/'):
                printf("\nDIVISAO \n Informe o primeiro numero: ");
                scanf("%f", &numero1);
                printf("\n Informe o segundo numero: ");
                scanf("%f", &numero2);

                if (numero2 != 0) {
                    divisao = numero1 / numero2;
                    printf("\n A divisao de %.2f / %.2f e igual a: %.2f\n", numero1, numero2, divisao);
                } else {
                    printf("\n Erro! Nao e possivel realizar a divisao por zero \n");
                }
                break;

            default:
                if(opcao != 's' && opcao != 'S') {
                    printf("\n Nenhuma operacao valida foi informada \n");
                } else {
                    printf("\n Deseja realmente sair? Digite S para sair ou outra tecla para continuar: ");
                    scanf(" %c", &opcao);
                }
                break;
        }

        printf("\n");
        system("pause");
    }

    return 0;
}
