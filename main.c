#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "pila.h"

int main()
{
    // 1)Desarrollar una función que devuelva un valor RANDOM en el rango de 0 a 100.

    srand(time(NULL));

    int random = devuelveDatoRandom();
    printf("El numero random es: %d\n", random);

    //2) Diseñe una función que reciba 3 números enteros y muestre el mayor y el menor.
    void mayorYMenor();

    return 0;
}
 int devuelveDatoRandom ()
 {
     int random = rand()%100-0;

     return random;
 }
void mayorYMenor ()
{
    int i;
    int menor = 0;
    int mayor = 0;

    while ( i = 0&& i < 4&& i++){
        if( i < i + 1){
                i = menor;
            } else {
                i = mayor;
            }
    }
    printf("El menor es: %d", menor);
    printf("El mayor es: %d", mayor);
}
