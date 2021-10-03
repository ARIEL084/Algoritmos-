#include <stdio.h>

int main() //funcion principal
{
	//declaracion de variables
	int u=3;
	int v;

	//declaracion de variables tipo apuntador
	int *pu;
	int *pv;

	//asignacion de valores
	pu = &u;
	v = *pu;
	pv = &v;

	/*salida en la pantalla de los datos*/
	printf("\n u = %d &u = %x pu = %x *pu=%d", u, &u, pu, *pu);
	printf("\n v = %d &v = %x pv = %x *pv=%d", v, &u, pv, *pv);

	getch(); //espera que el usuario presione una tecla
	return 0; //finalizacion del main
}