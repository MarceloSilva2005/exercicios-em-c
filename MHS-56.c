/* Marcelo Henrique Silva - RA 19215 - Exercicio 56 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int opcao;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-56 - Menu do Fast-Food Digital                         *\n************************************************************************\n\n");
    printf("1 - Combo Hambúrguer\n2 - Combo Pizza\n3 - Combo Salada\n4 - Combo Frango\nEscolha: ");
    if (scanf("%d", &opcao) != 1) return 1;
    switch (opcao) {
        case 1: printf("Combo Hambúrguer + Batata + Refri - R$ 30,00\n"); break;
        case 2: printf("Combo Pizza Brotinho + Refri - R$ 25,00\n"); break;
        case 3: printf("Combo Salada + Suco Natural - R$ 22,00\n"); break;
        case 4: printf("Combo Balde de Frango + Molho - R$ 35,00\n"); break;
        default: printf("Opção inválida! Escolha de 1 a 4.\n");
    }
    return 0;
}
