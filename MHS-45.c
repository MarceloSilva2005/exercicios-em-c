/* Marcelo Henrique Silva - RA 19215 - Exercicio 45 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int opcao = 0;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-45 - Menu até Sair                                     *\n************************************************************************\n\n");
    while (opcao != 3) {
        printf("\n1 - Consultar saldo\n2 - Fazer depósito\n3 - Sair\nOpção: ");
        if (scanf("%d", &opcao) != 1) return 1;
        if (opcao == 1) printf("Saldo consultado.\n");
        else if (opcao == 2) printf("Depósito selecionado.\n");
        else if (opcao == 3) printf("Encerrando o menu.\n");
        else printf("Opção inválida.\n");
    }
    return 0;
}
