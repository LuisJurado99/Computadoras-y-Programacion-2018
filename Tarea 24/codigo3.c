#include <stdio.h>
#include <conio.h>

struct registro {
  int cuenta;
  char nombre[30];
  int balance;
};
typedef struct registro Cuenta;

int main(int argc, char const *argv[]) {
  FILE *cfPtr;
  Cuenta c;
  int j=0;
  cfPtr=fopen("cuenta5.txt", "w");
  if (cfPtr==NULL) {
    printf("No se abrio el archivo\n");
  } else {
    printf("Dame la cuenta: \n" );
    scanf("%d", &c.cuenta );

    printf("Dame el nobmre\n");
    fflush(stdin);
    scanf("%*c%[^\n]", &c.nombre );

    printf("Dame el balance: \n");
    scanf("%*c%[^\n]", &c.balance );

    for (j = 0; j <=10; j++){
      fprintf(cfPtr, "%d %s %d\n", c.cuenta, c.nombre, c.balance );
    }
  }
  fclose (cfPtr);
  getch();
  return 0;
}
