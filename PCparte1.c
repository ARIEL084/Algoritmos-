#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <memory.h>
#include "EDFila.h"
#include "EDPila.h"




int main() {

    int i, pases;
    pases = 5;
    TFila J;
    char j;
    TPila P;
    char p;
    char jugador1, jugador2, jugador3, jugador4, jugador5, jugador6;
    
    printf("nombre primer jugador:\n");
    scanf("%s", &jugador1);
    printf("nombre del segundo jugador:\n");
    scanf("%s", &jugador2);
    printf("ingresa el nombre del jugador 3:\n");
    scanf("%s", &jugador3);
    printf("nombre del jugador 4:\n");
    scanf("%s", &jugador4);
    printf("nombre del jugador 5:\n");
    scanf("%s", &jugador5);
    printf("nombre del jugador 6:\n");
    scanf("%s", &jugador6);


    CrearFila(&J sizeof(j));
    j=jugador1;
    AgregarAFila(&J &j);//entra el jugador 1 a la fila
    j=jugador2;
    AgregarAFila(&J &j);
    j=jugador3;
    AgregarAFila(&J &j);
    j=jugador4;
    AgregarAFila(&J &j);
    j=jugador5;
    AgregarAFila(&J &j);
    j=jugador6;
    AgregarAFila(&J &j);
    /* se terminan de agregar los jugadores a la fila
    comienza el juego "la papa caliente..." */ 

//ronda 1 
    for (int i = 0; i <= pases; ++i) //va a iterar hasta que se completen los pases
    {
    	EliminarDeFila(&J &j);
    	CrearPila(&P sizeof(p)); 
    	p=j;
    	Apilar(&P &p); // apilamos los elementos de la fila, quedando el 5 como tope.
    }
    
    Desapilar(&P &p); //desapilamos al 5 que es el que queda eliminado de la ronda.
    
    //volvemos a introdicir los elementos de la pila a la fila.
    while(PilaVacia(&P) != 1){ 
    	Desapilar(&P &p);
    	j=p;
    	AgregarAFila(&J &j); //el nuevo orden de la fila sera 64321
    }
//ronda 2

   for (int i = 0; i <= pases; ++i)
   {
   	EliminarDeFila(&J &j);
   	j=p;
   	Apilar(&P &p); // 64321

   }

   Desapilar(&P &p); //quitamos el valor del segundo elimnado (1)
   while(PilaVacia(&P) != 1){
   	Desapilar(&P &p);
   	p=J;
   	AgregarAFila(&J &j); //2346    
   }

//ronda 3
   for (int i = 0; i <= pases; ++i)
   {
   	EliminarDeFila(&J &j);
   	j=p;
   	Apilar(&P &p); //2346
   }
   Desapilar(&P &p); //tercer eliminado (6)
   while(PilaVacia(&P) != 1){
   	Desapilar(&P &p);
   	p=j;
   	AgregarAFila(&J &j); //432
   }

//ronda 4

   for (int i = 0; i <= pases; ++i)
   {
   	EliminarDeFila(&J &j);
   	j=p;
   	Apilar(&P &p); //432
   }
   Desapilar(&P &p); //cuarto eliminado (2) 
   while(PilaVacia(&P) != 1){
   	Desapilar(&P &p);
   	p=j;
   	AgregarAFila(&J &j); //34
   }

//ronda 5
   for (int i = 0; i <= pases; ++i)
   {
   	EliminarDeFila(&J &j);
   	j=p;
   	Apilar(&P &p); //43
   }
   Desapilar(&P &p); //eliminado (3)
   while(PilaVacia(&P) != 1){
   	Desapilar(&P &p);
   	p=j;
   	AgregarAFila(&J &j); 
   }
// el ganador es el ultimo elemento de la fila J (JUGADOR 4).

   printf("El ganador del juego es: %s\n", j);



return 0;
	
}