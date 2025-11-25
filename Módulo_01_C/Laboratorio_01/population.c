#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int l_nascem, l_morrem, anos = 0;

    // TODO: Solicite o valor inicial ao usuário
    int start_size = get_int("Informe a quantidade inicial de lhamas:");
    while (start_size < 9)
    {
        start_size = get_int("O número deve ser pelo menos 9. Informe novamente: ");
    }

    // TODO: Solicite o valor final ao usuário
    int end_size = get_int("Informe a quantidade final de lhamas:");
    while (end_size < start_size)
    {
        end_size = get_int("O valor final deve ser maior ou igual ao inicial. Tente novamente: ");
    }

    // Loop até a população atingir ou ultrapassar o valor final
    // TODO: Calcule o número de anos até o limite
    while(start_size < end_size)
    {
        l_nascem = start_size / 3;             // Um terço da população nasce
        l_morrem = start_size / 4;             // Um quarto da população morre
        start_size = start_size + l_nascem - l_morrem; // Atualiza a população
        anos++;                                 // Conta um ano
    }

    // TODO: Imprima o número de anos
    printf("Total de anos:%d\n", anos);

}
