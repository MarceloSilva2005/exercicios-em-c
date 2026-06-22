/* Marcelo Henrique Silva - RA 19215 - Exercicio 48 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int opcao;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-48 - Menu com Opção de Sair                            *\n************************************************************************\n\n");
    do {
        printf("\n1 - Mensagem\n2 - Sair\nOpção: ");
        if (scanf("%d", &opcao) != 1) return 1;
        if (opcao == 1) printf("Você escolheu a mensagem!\n");
        else if (opcao != 2) printf("Opção inválida.\n");
    } while (opcao != 2);
    printf("Programa encerrado.\n");
    return 0;
}
