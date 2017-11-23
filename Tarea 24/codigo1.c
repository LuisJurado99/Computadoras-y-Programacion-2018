#include <stdio.h>
int main(int argc, char const *argv[]) {
int dato;
FILE *ptrArchivo;
ptrArchivo=fopen("datos.dat", "wb");

if (ptrArchivo==NULL) {
  printf("Eror al abrir el archivo\n");
} else {
  printf("Dame el dato a guardar en el archivo:\n");
  scanf("%d",&dato);

  //se guarda el archivo

  fprintf(ptrArchivo, "%d\n", dato );
  fprintf(ptrArchivo, "%d\n", ++dato );
  fprintf(ptrArchivo, "%d\n", ++dato );
  fclose (ptrArchivo); //se cierra el archivo
}
  return 0;
}
