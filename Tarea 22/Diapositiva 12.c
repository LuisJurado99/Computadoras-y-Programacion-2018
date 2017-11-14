#include <stdio.h>
#include <stdlib.h>
#include "cabezerainf.h"
#define MAX 10

int main (int argc, char const *argv []){
	appInfoData ("Ejemplo de punteros y arreglos", "09-11-2017");
	int cals [MAX] = {8, 9, 8, 8, 6, 7, 9, 8, 10, 10};
	int *ptrClas;
	
	printf ("Valor del primer elemento: %d\n", cals[0]);
	printf ("Dirección del primer elemento: %d\n", &cals[0]);
	printf ("Dirección del primer elemento: %d\n", cals);
	
	ptrClas = cals;
	
	printf ("Valor del primer elemento: %d\n", *ptrClas);
	ptrClas++;
	printf ("Valor del primer elemento: %d\n", *ptrClas);
	ptrClas++;
	printf ("Valor del primer elemento: %d\n", *ptrClas);
	return 0;
}
