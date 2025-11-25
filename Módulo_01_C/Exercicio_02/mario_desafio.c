#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int tijolos, i, j, espacos;
    do
    {
        tijolos = get_int("Tamanho:");
    }
    while (tijolos < 1 || tijolos > 8);

    for (i = 0; i < tijolos; i++)
    {
        for (espacos = 0; espacos < (tijolos - i - 1); espacos++)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("  ");
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
