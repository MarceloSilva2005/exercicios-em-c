/* Marcelo Henrique Silva - RA 19215 - Exercicio 17 */
#include <stdio.h>
#include <locale.h>
int main(void) {
    double altura;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n* Programa MHS-17 - Sensor do Parque Temático                         *\n************************************************************************\n\n");
    printf("Digite a altura da criança em centímetros: ");
    if (scanf("%lf", &altura) != 1) return 1;
    if (altura >= 140) printf("Luz verde: entrada liberada!\n");
    else printf("Luz vermelha: entrada não permitida.\n");
    return 0;
}
