#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int op=0;
    int dia=0;
    do{
    printf("Elige un número del 1 al 7\n");
    scanf("%i", &dia);
    
    switch (dia){ //inicio del switch
        case 1: printf("Lunes");
        break;
        case 2: printf ("Martes");
        break;
        case 3: printf ("Miercoles");
        break;
        case 4: printf ("Jueves");
        break;
        case 5: printf ("Viernes");
        break;
        case 6: printf ("Sabado");
        break;
        case 7: printf("Domingo");
        break;
        default: printf("Número del 1 al 7");
        break;
    } // fin del switch
    printf ("\nDeseas continuar 1 ó 0\n");
    scanf ("%i", &op);
    }// fin del while 
    while (op==1); /*Terminación del while con su condición*/
    return (EXIT_SUCCESS);
}