/* Marcelo Henrique Silva - RA 19215 - Exercicio 15 */
#include <stdio.h>
#include <locale.h>

int main(void) {
    double ah, lh, ch, acm, lcm, ccm;
    int porAltura, porLargura, porComprimento;
    setlocale(LC_ALL, "");
    printf("************************************************************************\n");
    printf("* Aluno: MARCELO HENRIQUE SILVA - RA 19215                            *\n");
    printf("* Programa MHS-15 - Caixas no Caminhão                                *\n");
    printf("************************************************************************\n\n");
    printf("Digite altura, largura e comprimento do caminhão (metros): ");
    if (scanf("%lf %lf %lf", &ah, &lh, &ch) != 3) return 1;
    printf("Digite altura, largura e comprimento da caixa (centímetros): ");
    if (scanf("%lf %lf %lf", &acm, &lcm, &ccm) != 3) return 1;
    if (ah <= 0 || lh <= 0 || ch <= 0 || acm <= 0 || lcm <= 0 || ccm <= 0) {
        printf("Todas as dimensões devem ser positivas.\n");
        return 0;
    }
    porAltura = (int)(ah / (acm / 100.0));
    porLargura = (int)(lh / (lcm / 100.0));
    porComprimento = (int)(ch / (ccm / 100.0));
    printf("Cabem %d caixas no caminhão.\n", porAltura * porLargura * porComprimento);
    return 0;
}
