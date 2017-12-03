#include <stdio.h>
#define MAX 200
#ifndef alumnos_h
#define alumnos_h
struct alumnos{
    int edad;
    char nombre[120];
    char genero[2]; //se agrego [2] para hacerlo string y poder realizar el cambio de  cadena de caracteres
    char carrera[50];
    char nCuenta[10];
    float promedio;
};
typedef struct alumnos ALUMNO;
int indiceAlArreglo=0; // esta variable global se usar· para almacenar el indice del ultimo alumno ingresado al arreglo.
int j=0;
int a=0;
ALUMNO listaAlumnos[MAX]; // declaraciÛn de un arreglo de alumnos de 200 elementos


/**  Funcion insertarAlumno
 *
 * Descripci�n:
 *   Funcion para insertar al arreglo un nuevo alumno,
 * Entrada:
 *     la funci�n  recibe un alumno "al" de entrada.
 * L�gica interna:
 *     Verifica que el indice este en el rango adecuado, entre 0 y MAX.
 *     de cumplirse ingresa el alumno al arreglo e incrementa el indice general
 * Valor de retorno:
 *     No regresa nada.
 */
void insertarAlumno(ALUMNO al){
    if (indiceAlArreglo >= 0 && indiceAlArreglo < MAX) { // verificamos que inidice este en los rangos correctos
        listaAlumnos[indiceAlArreglo]=al;
        indiceAlArreglo++;
    }else{
        printf("El indice apunta fuera del arreglo, favor de revisar la l�gica");
    }
}

/** Funcion nuevoAlumno
 * Descripci�n:
 *   Funcion para capturar los datos desde teclado de un nuevo alumno,
 * Entrada:
 *     la funci�n no recibe ningun par�metro de entrada.
 * L�gica interna:
 *     Crea una variable temporal del tipo alumno y se obtienen los datos desde el teclado.
 *     Tamb�en se agrega el alumno al arreglo
 * Valor de retorno:
 *     Regreza la variable temporal de tipo ALUMNO con los datos llenos.
 */
ALUMNO nuevoAlumno(){
    ALUMNO tmp;
    printf("Introduce la edad:");
    scanf("%d",&tmp.edad);
    printf("Introduce el genero [M o F]:");
    scanf(" %s",&tmp.genero);   // El espacio antes del %c es para que ignore espacios en blanco
    printf("Introduce el nombre:");
    scanf("%*c%[^\n]",tmp.nombre);
    printf("Introduce Carrera:");
    scanf("%*c%[^\n]",tmp.carrera);
    printf("Introduce numero de cuenta:");
    scanf("%*c%[^\n]",tmp.nCuenta);
    printf("Introduce tu promedio:");
    scanf("%f",&tmp.promedio);
    /*
     * Aqui agregamos al alumno al arreglo e incrementamos el �ndice para que apunte al siguiente elementos
     */
    insertarAlumno(tmp);
    return tmp;
}
/** funcion imprimeAlumno
 * Descripci�n:
 *   Funcion para imprimir en pantalla los datos de un solo alumno,
 * Entrada:
 *     la funci�n  recibe la variable alumno a ser impresa.
 * L�gica interna:
 *     S�lo imprime cada uno de los campos
 * Valor de retorno:
 *     No regresa nada
 */
void imprimeAlumno(ALUMNO al){
    printf("+---------------------------------+\n\n");
    printf("\tNombre:%s\n",al.nombre);
    printf("\tEdad:%d\n",al.edad);
    printf("\tGenero:%s\n",al.genero); //se cambia a %s para poder imprimir el genero como cadena de caracteres en el main
    printf("\tCarrera:%s\n",al.carrera);
    printf("\tNumero de Cuenta:%s\n",al.nCuenta);
    printf("\tPromedio: %.2f\n",al.promedio);
    printf("+---------------------------------+\n\n");
}


/** funcion imprimirLista
 * Descripci�n:
 *   Funcion para imprimir en pantalla TODOS los datos del arreglo.
 * Entrada:
 *     la funci�n NO recibe parametros de entrada.
 * L�gica interna:
 *     en un for recorre el arreglo hasta el indiceAlArreglo que es el que almacena el tope actual
 * Valor de retorno:
 *     No regresa nada
 */
void imprimirLista(){
    int j=0;
    for (j = 0; j < indiceAlArreglo; j++) {
        printf("+--------- # de lista: %d ---------+*\n",j+1);
        imprimeAlumno(listaAlumnos[j]);
    }
}



int menu(){
    int opcion=0;
    printf("\n----------- Men� para la aplicacion de BD para alumnos ---------\n");
    printf("(1) Crear lista.\n");
    printf("(2) Guardar a archivo.\n");
    printf("(3) Leer desde archivo.\n");
    printf("(4) Mostrar lista.\n");
    printf("(5) Agregar alumno. \n");
    printf("(6) Obtener promedio de alumnos.\n");
    printf("(7) Buscar alumno por nombre. \n");
    printf("(8) Buscar alumno por edad. \n");
    printf("(9) Eliminar alumno. \n");
    printf("(10) Modificar datos. \n");
    printf("(11) Exportar archivo a un tipo .txt \n");
    printf("(12) Total de alumnos. \n");
    printf("(13) Alumno mas alto\n");
    printf("(14) Alumnos reprobados.\n");
    printf("(0) SALIR\n");
    printf("\n\nElige una opcion:");
    scanf("%d",&opcion);

    return opcion;
}



/**
Manejo de archivos
*/

/*
 Funcion para grabar un ARREGLO DE REGISTROS
 en el archivo Evaluaciones.dat
 */
void grabarRegistros(ALUMNO r[], int tam){
    FILE *ptrF;

    if((ptrF=fopen("Evaluaciones.dat","w"))==NULL){
        printf("el archivo no se puede abrir\n");
    }else{
        fwrite(r,sizeof(ALUMNO),tam,ptrF);
    }

    fclose(ptrF);
}

/*
 Funcion para LEER  REGISTROs
 en el archivo Evaluaciones.dat
 */
void leerRegistros(int tam){

    FILE *ptrF;

    if((ptrF=fopen("Evaluaciones.dat","rb"))==NULL){
        printf("el archivo no se puede abrir\n");
    }
    else{
        //for /*(int i=0;i<tam;i++)*/
        fread(listaAlumnos,sizeof(ALUMNO),tam,ptrF);
    }

    fclose(ptrF);
}

/**
 *
 * Regresa el numero de registros almacenados en el archivo
 *
 */
int registrosEnArchivo(){
    FILE *ptrF;
    int cont=0;
    ALUMNO  basura;
    if((ptrF=fopen("Evaluaciones.dat","rb"))==NULL){
        printf("el archivo no se puede abrir\n");
    }
    else{
        while(!feof(ptrF)){
            if (fread(&basura,sizeof(ALUMNO),1,ptrF))
                cont++;
        }

    }
    fclose(ptrF);
    return cont;
}

void ListaEditar() { //lista de case para editar formatos
  printf("1) Edad\n");
  printf("2) Genero\n" );
  printf("3) Nombre\n" );
  printf("4) Carrera\n" );
  printf("5) Numero de cuenta\n");
  printf("6) Promedio\n" );
  }
void eliminar(ALUMNO listaAlumnos[MAX], int *indiceAlArreglo, int alumnoEliminar){

     for(j=(alumnoEliminar-1); j<*indiceAlArreglo-1; j+=1){
         listaAlumnos[j]= listaAlumnos[j+1];
     }
     *indiceAlArreglo-=1;
  }
void editorTexto() {
  FILE *ptrArchivo;
  printf("Escribir en un documendo .txt\n");
  if (ptrArchivo==NULL) {
    printf("Error del archivo\n");
  } else {
    ptrArchivo=fopen("Alumno.txt", "w");
    for (j = 0; j < indiceAlArreglo; j++) {
      fprintf(ptrArchivo, "Edad del alumno %d: %d\n", j+1 ,listaAlumnos[j].edad );
      fprintf(ptrArchivo, "Nombre del alumno %d: %s\n",j+1, listaAlumnos[j].nombre );
      fprintf(ptrArchivo, "Genero del alumno %d: %s\n",j+1, listaAlumnos[j].genero );
      fprintf(ptrArchivo, "Carrera del alumno %d: %s\n",j+1, listaAlumnos[j].carrera );
      fprintf(ptrArchivo, "Numero de cuenta del alumno %d: %s\n",j+1 ,listaAlumnos[j].nCuenta );
      fprintf(ptrArchivo, "Promedio del alumno %d: %.2f\n",j+1, listaAlumnos[j].promedio );
      fprintf(ptrArchivo, "++++++++++++++++++++++++++++++++++\n");
    }
    fclose(ptrArchivo);
  }
}

#endif /* alumnos_h */
