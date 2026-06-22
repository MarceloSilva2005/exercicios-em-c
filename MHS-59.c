/* Marcelo Henrique Silva - RA 19215 - Exercicio 59 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    char direcao;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-59 - Assistente de Direção                             *\n************************************************************************\n\n");
    printf("Digite a direção (N, S, L ou O): ");
    if (scanf(" %c", &direcao) != 1) return 1;
    switch (direcao) {
        case 'N': printf("Seguir para o Norte.\n"); break;
        case 'S': printf("Seguir para o Sul.\n"); break;
        case 'L': printf("Virar à Leste (Direita).\n"); break;
        case 'O': printf("Virar à Oeste (Esquerda).\n"); break;
        default: printf("Comando inválido! Pare o robô.\n");
    }
    return 0;
}
