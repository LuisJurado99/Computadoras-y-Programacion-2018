#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int main(int argc, char** argv) {
    int edad=0;
    const float PI=3.1416;
    printf ("¿Cual es tu edad?");
    scanf ("%d", &edad);
    
    //MAX=5;
    // PI=3.1416;
    printf("Tu edad es: %d \n", edad);
    printf("Maximo: %d\n", MAX);
    printf("Valor de PI: %.4f\n", PI );
    return (EXIT_SUCCESS);
}

