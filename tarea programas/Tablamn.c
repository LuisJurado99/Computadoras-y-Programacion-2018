#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int i=0;
    int k=0;
    int j=0;
    printf("¿Qué tabla quieres?");
    scanf ("%i", &k);
    printf("¿Hasta donde?");
    scanf ("%i", &i);
    for (j=1; j<=i; j++){
        printf ("%i x %i = %i\n", k, j, k*j);
    }
    return (EXIT_SUCCESS);
}

