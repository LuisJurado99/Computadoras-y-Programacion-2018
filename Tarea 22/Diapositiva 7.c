#include <stdio.h>
#include <stdlib.h>
#include "cabezerainf.h"

int main (int argc, char const *argv[]){
appInfoData ("Ejemplo de Punteros", "09-11-2017");
int a;
a=10;
int *puntero;
puntero=&a;
printf ("%d\n", *puntero);
printf ("%d\n", puntero);
printf ("%d\n", a);
printf ("%d\n", &a);
return 0;
}
