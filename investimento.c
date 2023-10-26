#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Definindo a localidade para o portugues

    float valorInvestido = 0, percentualRendimento = 0, desconto, valorInvestidoDesconto, lucroMensal, lucro;
    int periodo = 0, i = 0, cont = 0;

    printf("Digite o valor investido\n");
    scanf("%f", &valorInvestido);
    printf("Digite a quantidade de meses do investimento\n");
    scanf("%d", &periodo);
    printf("Digite o percentual de rendimento ao mês\n");
    scanf("%f", &percentualRendimento);

    // PAREI AQUI

    for (i = 0; i < periodo; i++)
    {                                                                // Loop iniciando em 1 e finalizando no valor informado para periodo
        cont += 1;                                                   // contador que soma 1 a cada loop para contagem dos meses
        lucroMensal = valorInvestido * (percentualRendimento / 100); // Calcula quanto rendeu
        valorInvestido += lucroMensal;
        lucro += lucroMensal;                                            // Soma o lucro ao valor em valorInvestido
        printf("Depois do mês %.2d terá: %.2f\n", cont, valorInvestido); // Printa na tela uma mensagem dizendo quando progrediu em cada mês
    }
    printf("Saldo Atulizado: %.2f\n", valorInvestido);

    desconto = lucro * 0.15; // Calcula o desconto do Imposto Retido na Fonte

    valorInvestidoDesconto = valorInvestido - desconto; // Subtrai ao valorInvestido o desconto

    printf("Saldo Atualizado - Imposto Retido na Fonte: %.2f\n", valorInvestidoDesconto);

    return 0;
}