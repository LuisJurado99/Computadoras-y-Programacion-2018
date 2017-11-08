#include <stdio.h>
#include "funciones1.h"

int main () {
	float precio=0.0f;
	printf ("¿Cuál es el precio del producto?");
	scanf ("%f", &precio);
	printf ("Valor del precio Total: %.2f\n", precio);
	printf ("Valor del IVA: %.2f\n", fniva(precio));
	printf ("Valor sin IVA: %.2f\n", fnsiniva(precio));
	
	return (0);
}
