#include <stdio.h>
// Desafio Xadrez - Movimento das peças
// Nivel mestre

void mover (char direcao, int vezes) { // Função para mover a peça na direção especificada 
    if (vezes == 0) return; // Condição de parada da recursão, também conhecido como caso base
    

    switch (direcao) { // switch para definir a direção do movimento que vai ser chamada posteriormente
        case 'C':
            printf("Cima\n");
            break;
        case 'D':
            printf("Direita\n");
            break;
        case 'E':
            printf("Esquerda\n");
            break;
        case 'B':
            printf("Baixo\n");
            break;
        default:
            printf("Direção inválida!\n");
            
    }
   
    mover(direcao, vezes - 1); // Chamada recursiva para mover novamente na mesma direção, decrementando o número de vezes
    // A recursão continua até que vezes seja igual a 0, momento em que a função retorna e não faz mais chamadas recursivas.
}



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
                mover('D', 5); //chamada da função mover com a direção e o número de vezes
            
            break;
        case 2:
            for (i = 1; i <= 5; i++) { //loop externo para o movimento vertical
                int j = 1;
                mover('C', 1); //chamada da função mover para "Cima"

                while(j <= 1) { //loop interno para o movimento horizontal
                    mover('D', 1); //chamada da função mover para "Direita"
                    j++;
                }
            }
            
            break;
        case 3:
            mover('E', 8); //chamada da função mover para "Esquerda" 8 vezes

            break;
        case 4:
            for (i = 1; i <= 2; i++) { //loop simples
                mover('C', 1); //chamada da função mover para "Cima"
                //movimento do cavalo com recursividade, se for sem recursivadade, é só subtituir a chamada da função mover por printf("Direção\n");
                int j = 1;
                
                while (i == 2 && j <= 1) { //loop complexo que diz quando i == 2 for verdadeiro e j <= 1 também for verdadeiro, será executado o movimento para direita 
                    mover('D', 1); //chamada da função mover para "Direita"
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
    

