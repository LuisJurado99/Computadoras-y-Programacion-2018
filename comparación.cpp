#include <stdio.h>

int main(int argc, char *argv[]) {
	float n1=0, n2=0;
	int n3=0;
	printf("Ingresa tu número con decimales\n");
	scanf ("%f", &n1);
	printf("Ingresa tu número con decimales\n");
	scanf ("%f", &n2);
	printf("Ingresa tu número entero\n");
	scanf("%d", &n3);
	if ((n1!=n2)&&(n2!=n3)&&(n3!=n1)){
		
		if (n1<n2 && n1<n3) {
			
			printf("%.2f es el menor\n", n1);}
		
		if (n2<n1 && n2<n3){
			
			printf("%.2f es el menor\n",n2);}
		
		if (n3<n1 && n3<n2){
			
			printf("%d es el menor\n", n3);}
		
		if (n1>n2 && n1>n3) {
			
			printf("%.2f es el mayor\n", n1);}
		
		if (n2>n1 && n2>n3){
			
			printf("%.2f es el mayor\n",n2);}
		
		if (n3>n1 && n3>n2){
			
			printf("%d es el mayor\n", n3);}
	}
	
	else {printf("números iguales\n");}
	return 0;
}

