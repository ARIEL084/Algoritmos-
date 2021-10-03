int main(){
	char element;
	char busca;
	int i, longitud, verificar=0;
	TPila Original;
	TPila Reserva;
	
	CrearPila (&Original, sizeof(element));
	CrearPila (&Reserva, sizeof(element));
	printf("De cuantos elementos es tu pila?\t");
	scanf("%i", &longitud);
	printf("Escribe el valor del elememnto y presiona enter para el siguiente\n");
	for(i=0; i<longitud; i++){ //Con este ciclo apilamos todos los valores 
	scanf(" %c", &element);
	Apilar(&Original, &element);
	}
	printf("Escribe que elemento de la pila te gustaria buscar\t");
	scanf(" %c", &busca);
	printf("%c", busca);
	while(PilaVacia(Original)!=1 || verificar==1){//Ciclo para comparar elementos
	Desapilar(&Original, &element);
	if(element==busca){
	verificar = 1;
	}
	Apilar(&Reserva, &element);
	}	
	while(PilaVacia(Reserva)!=1){//Ciclo para restablecer pila original
	Desapilar(&Reserva, &element);
	Apilar(&Original, &element); 
	}
	return 0;
}