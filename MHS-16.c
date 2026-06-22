/* Marcelo Henrique Silva - RA 19215 - Exercicio 16 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    int pedido;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-16 - Múltiplo de 3 e/ou 5                              *\n************************************************************************\n\n");
    printf("Digite o número do pedido: ");
    if (scanf("%d", &pedido) != 1) return 1;
    if (pedido % 3 == 0 && pedido % 5 == 0) printf("Você ganhou um refrigerante e uma sobremesa!\n");
    else if (pedido % 3 == 0) printf("Você ganhou um refrigerante!\n");
    else if (pedido % 5 == 0) printf("Você ganhou uma sobremesa!\n");
    else printf("O pedido não ganhou brindes.\n");
    return 0;
}
