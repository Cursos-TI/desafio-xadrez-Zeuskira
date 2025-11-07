#include <stdio.h>
// Desafio Xadrez - Movimento das peças
// Nivel aventureiro
int main() {
    int i = 1, opcao; //declaração das variaveis
    
    printf("Escolha uma peça de xadrez a ser movimentada:\n"); //menu de escolha
    printf("1. Torre\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Cavalo\n");
    printf("Digite o número correspondente à peça: ");
    scanf("%d", &opcao);

    switch (opcao) { //estrutura switch para retornar a movimentação da peça escolhida
        case 1:
            while ( i <= 5) {

                printf("Direita\n");
                i++;
            }
            break;
        case 2:
            for (i = 1; i <= 5; i++) {
                printf("Cima\n");
                printf("Direita\n");
            }
            break;
        case 3:
            do {
                printf("Esquerda\n");
                i++;
            } while (i <= 8);
            break;
        case 4:
            for (i = 1; i <= 2; i++) { //loop para repetir o movimento "Cima" duas vezes
                printf("Cima\n");
                int j = 1;
                
                while (i == 2 && j <= 1) { //loop para mover "Direita" apenas após o segundo "Cima"
                    printf("Direita\n");
                    j++;
                }
            
            
            }
            break;
        default:
            printf("Opção inválida. Por favor, escolha 1, 2, 3 ou 4.\n");
            break;
    }



    return 0;
}
    

