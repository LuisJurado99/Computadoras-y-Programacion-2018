#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int n1=0;
    int n2=0;
    int n3=0;
    printf("Inserta 1 numero\n");
     scanf("%d",&n1);
    printf("Inserta 2 numero\n");
     scanf("%d",&n2);
    printf("Inserta 3 numero\n");
     scanf("%d",&n3);
     if (n1>0 && n2>0 && n3>0 && (n1!=n2)&&(n2!=n3)&&(n3!=n1)){
      if (n1<n2 && n1<n3){
      printf("%d es el menor", n1);}
      if (n2<n1 && n2<n3){
      printf("%d es el menor",n2);}
      if (n3<n1 && n3<n2){
      printf("%d es el menor", n3);}
     }
     else {printf("error de numeros");}
    return (EXIT_SUCCESS);
}
