#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    char res;
    int J2=0;
    int J1=0;
    printf("Las opciones son: \n1: Piedra. \n2: Papel.\n3: Tijera");
    do{
    printf("\nJugador 1 ingresa tu jugada\n");
    scanf("%i", &J1);
    printf("\nJugador 2 ingresa tu jugada\n");
    scanf ("%i", &J2);
    if (J1==J2){
        printf ("Empate");
    } // primer if cerrado 
    if ((J1==1 && J2==2)||(J1==2 && J2==3)||(J1==3 && J2==1)){
        
        printf("GANA EL JUGADOR 2");
    } //segundo if cerrado
    
    if ((J1==1 && J2==3)||(J1==2 && J2==1)||(J1==3 && J2==2)){
        
        printf("GANA EL JUGADOR 1");
    } // tercer if cerrado
    printf ("\nDeseas continuar Y/N");
    scanf ("%c", &res );
    res=getchar();
    } //fin del do
    while ((res == 'Y') || (res == 'y'));
    return (EXIT_SUCCESS);
}