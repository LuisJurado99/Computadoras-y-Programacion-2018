#include <stdio.h>
#include <stdlib.h>

int main(){
	//Declaración de variables.
	int a[15];
	int v[15];
	int tam=0;
	int resta;
	int su=0;
	int mat=0;	
	int i=0;
	char op;
printf ("Este programa te puede restar y sumar\n Elije que quieres hacer \"+\" ó \"-\" \n Presiona enter para salir\n");	
scanf ("%c", &op); //inicio de case
switch (op) {  //inicio del switch 
case '+': //inicio de case en suma
printf ("Número de elementos que deseas sumar. \n");
scanf ("%d", &mat);
for (i=1; i<=mat; i++){
	printf("Introduce el número: ");
	scanf ("%d", &a[i]);
	su += a[i];
}
printf ("El total de la suma es: %d \n", su);
break; //fin de la suma 
case '-': //inicio de case en resta 
resta=0;
printf("Introduce los elementos a restar: ");
  scanf ("%d", &tam);
for(i = 0; i<tam; i++){
printf ("Introduce el número: ");
scanf("%d",&v[i]);
}
resta=v[0];
for(i=1;i<tam;i++){
    resta = resta-v[i];
}
 /* Fin del case and switch
Todo bien */
}
 
printf ("Fin del programa");
return 0;
}
