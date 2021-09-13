#include <stdio.h>
#include <stdlib.h>

int main() {

    int capicua[100];
    int n, tamanio;
    int aux1, aux2, i;
    i=0;
    aux1=0;
//ingreso de datos 
    printf("ingrese el numero a verificar \n");
    scanf("%i",&n);
//se copia el numero dentro del vector con un contador que nos da la longitud del numero
    tamanio = n; 
    do
    {
        capicua[aux1]= tamanio%10;
        tamanio = tamanio/10;
        aux1++;
        i++; //esta variable nos da la ultima posicion que se ha llenado en el array
    } while (tamanio!=0);

    aux1=0;

    while (aux1!=i){
        printf("%i\n", capicua[aux1]);
        aux1++;
    }
    printf("\n\n");
//comparamos los digitos en el vector para ver si coinciden los extremos
    aux1=0;
    aux2=i-1;

    while((aux1!=aux2) || ((aux1+1)!=(aux2))){
        if (capicua[aux1]!=capicua[aux2])//si hay 2 numeros simetricos distintos, entonces no es capicua
        {
            printf("el numero no es capicua %i\n", n);
            return 0;
        }
        else{ //se sigue ejecutando el ciclo hasta comparar todos los digitos, por lo que se concluye que el numero ingresado es capicua
            printf("%i=%i\n", aux1, aux2 );
            aux1++;
            aux2--;
        }
    }

    printf("el numero es capicua %i\n", n);

    return 0;
}