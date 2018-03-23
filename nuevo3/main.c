#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_NUMEROS 5

int main()
{
    int i;
    int numeroUsuario=0;
    int acumulador = 0; // lo primero que se ejecuta en la funcion es el acumulador
    float resultado=0;
    int maximo=0;
    for(i=0 ; i < CANTIDAD_NUMEROS ; i++)
    {
        printf("Dame el Numero %d\n",i+1);
        scanf("%d",&numeroUsuario);
        acumulador = acumulador + numeroUsuario;

        if(numeroUsuario>maximo)
        {
            maximo=numeroUsuario;
        }

    }
    resultado = (float)acumulador / CANTIDAD_NUMEROS;
    printf("Resultado %.2f\n",resultado);
    printf("Maximo %d",maximo);

    return 0;
}
