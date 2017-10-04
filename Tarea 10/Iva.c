#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    float total=0;
    float iva=0;
    float siniva=0;
    char res;
    do {
    printf ("¿Cuanto cuesta tu articulo?\n");
    scanf ("%f", &total);
    iva=total*0.16;
    siniva= total-iva;
    printf ("Total: %.2f \n ", total);
    printf ("Precio sin iva: %.2f \n", siniva);
    printf ("Total del iva: %.2f", iva);
    printf ("\n¿Deseas ingresar un nuevo producto? S/N\n");
    scanf ("%c", &res);
    res=getchar();
    }
    while ((res == 'S') || (res =='s'));
    return (EXIT_SUCCESS);
}