#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i=0;
    int ast=0;
    printf("¿Cuantos asteriscos quieres?\n");
    scanf ("%i", &ast);
    for ( i=1; i<=ast; i++){
        printf("*");
    }
    printf("\nFin");
    return (EXIT_SUCCESS);
}

