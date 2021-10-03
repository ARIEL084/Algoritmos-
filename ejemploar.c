#include <stdio.h>
#include <string.h>

int main()
{
	struct empleado
	{
		char nombre[50];
		int neconomico;
		float salario;
		int anioIngreso;
	};
    struct empleado empleado1;
    empleado1.neconomico = 32415;
    printf("el numero economico del empleado 1 es %i\n", empleado1.neconomico);
    
    printf("ingrese el nombre del empleado 1 \n");
    gets(empleado1.nombre);
    printf("el nombre de la empleada 1 es %s\n", empleado1.nombre);

    printf("ingrese el salario del emplado 1 \n" );
    scanf("%f\n", &empleado1.salario);
    printf("el salario del emplado 1 es %f\n", empleado1.salario);
    
    struct empleado profesores[6];
    profesores[0].neconomico = 32415;
    printf("el numero economico del profesor es %i\n", profesores[0].neconomico );
     
     	
     
	return 0;
}