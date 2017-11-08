#include <stdio.h>

int fncuadro (int, int);
int main() {
	int a=0;
	int b=0;
	printf ("¿De que tamaño deseas el largo?");
	scanf ("%d", &a);
	printf ("¿De que tamaño deseas el ancho");
	scanf ("%d", &b);
	fncuadro(a, b);
	
	return (0);
}
int fncuadro (int a, int b){
	int j=0;
	int k=0;
	
	for (k=1; k<=a; k++){
		printf ("\n");
		for (j=1; j<=b; j++){
			printf ("+");    
		}
	}
	return 0;
}
