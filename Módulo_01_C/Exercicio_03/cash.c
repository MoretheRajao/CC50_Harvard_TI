#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float troco;
    int i, centavos;
    int contador=0;
    int moedas [] = {25,10,5,1};
    do{

        troco = get_float("troco:");
    }
    while(troco <=0);

    centavos = round(troco * 100);

    for(i = 0; i < 5; i++)
    {
        while(centavos - moedas [i] >=0 && centavos > 0){
            centavos = centavos - moedas[i];
            contador++;
        }
    }
    printf("%i\n",contador);
}
