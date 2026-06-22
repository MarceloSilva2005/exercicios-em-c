/* Marcelo Henrique Silva - RA 19215 - Exercicio 53 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int opcao;
    char sair;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-53 - Confirmar Saída com s                             *\n************************************************************************\n\n");
    do {
        printf("\n1 - Cadastrar\n2 - Consultar\nEscolha uma opção: ");
        if (scanf("%d", &opcao) != 1) return 1;
        if (opcao == 1) printf("Cadastro selecionado.\n");
        else if (opcao == 2) printf("Consulta selecionada.\n");
        else printf("Opção inválida.\n");
        printf("Deseja sair? (s/n): ");
        if (scanf(" %c", &sair) != 1) return 1;
    } while (sair != 's' && sair != 'S');
    printf("Programa encerrado.\n");
    return 0;
}
