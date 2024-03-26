#include <stdio.h>

int main() {
    float nota1, nota2, media, mediasala, total = 0;
    int reprovados = 0, exames = 0, aprovados = 0, alunos = 0;
    char escolha = ' ';
    
    while(escolha != 'b' && escolha != 'B') {
        printf("\nDigite A para registrar novas notas");
        printf("\nDigite B para encerrar\n");
        scanf(" %c", &escolha);

        switch(escolha) {   
            case('A'):
            case('a'):
                printf("Digite as notas:\n");
                scanf("%f %f", &nota1, &nota2);
                media = (nota1 + nota2) / 2;
                total += nota1 + nota2;
                alunos++;
                mediasala = total / alunos;

                if(media <= 3) {
                    printf("Você está reprovado\n");
                    reprovados++;
                } else if(media > 3 && media <= 7) {
                    printf("Você fará um exame\n");
                    exames++;
                } else if(media > 7) {
                    printf("Você está aprovado\n");
                    aprovados++;
                }
                break;

            case('B'):
            case('b'):
                printf("\nO número de reprovados é: %d\n", reprovados);
                printf("O número de exames é: %d\n", exames);
                printf("O número de aprovados é: %d\n", aprovados);
                printf("A média da sala é: %.2f\n", mediasala);
                break;

            default:
                printf("Escolha inválida.\n");
                break;
        }
    }
    return 0;
}
