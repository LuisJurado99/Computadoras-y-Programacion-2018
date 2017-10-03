#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int num=0;
    int i=2;
    printf ("Escribe un número\n Yo te digo si es par o impar\n");
    scanf ("%f", &num);
    if (i%num==0){
        printf ("\nEs par");
    } else {
        printf ("\nEs impar");
    }     
    printf("\nFin del programa");
    return (EXIT_SUCCESS);
}

