/* Marcelo Henrique Silva - RA 19215 - Exercicio 57 */
#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(void) {
    char cor[30];
    int codigo;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-57 - Central do Brinquedo Eletrônico                   *\n************************************************************************\n\n");
    printf("Digite a cor (Verde, Amarelo ou Vermelho): ");
    if (scanf("%29s", cor) != 1) return 1;
    if (strcmp(cor, "Verde") == 0) codigo = 1;
    else if (strcmp(cor, "Amarelo") == 0) codigo = 2;
    else if (strcmp(cor, "Vermelho") == 0) codigo = 3;
    else codigo = 0;
    switch (codigo) {
        case 1: printf("O urso diz: \"Vamos brincar lá fora!\"\n"); break;
        case 2: printf("O urso diz: \"Estou ficando com soninho...\"\n"); break;
        case 3: printf("O urso diz: \"Estou com fome, hora do lanche!\"\n"); break;
        default: printf("Cor desconhecida\n");
    }
    return 0;
}
