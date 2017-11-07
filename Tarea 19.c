#include <stdio.h>
#include <stdlib.h>

int fncuadro (int a){
    int j=0;
    int k=0;
    
    for (k=1; k<=a; k++){
        printf ("\n");
        for (j=1; j<=a; j++){
        printf ("+");    
        }
    }
    return 0;
}
int main(int argc, char** argv) {
    int a=0;
    printf ("¿De que tamaño deseas el cuadro?");
    scanf ("%d", &a);
    fncuadro(a);
    
    return (EXIT_SUCCESS);
}

