#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "alumnos.h"

int main (int argc, const char * argv[]) {
    int opcion=0;  // opcion del menu seleccionada
    int cantidad=0; // para usar en el case 1, cantidad de alumnos a crear
    int j=0; // uso general de los for
    int tmp=0; //uso switch case 1
    int cambiaEdad=0; //uso del case 10.1
    int alumno=0; //recorrer dentro del 10 los alumno
    int alumnoEliminar=0; //Variable utilizada para poder eliminar
    int buscarEdad=0; //Variable para buscar edad
    float temporal=0.0f; //variable para editar promedios y buscar por promedio
    float TotalPromedio=0; //sacar el promedio de alumnos
    float suma=0; //para tener el promedio de alumnos
    char cambiaNombre[120]; //cambiar el nombre case 10.1
    char cambiaGenero[2]; //cambiar genero en case 10.2
    char cambiaCarrera[50]; //cambiar carrera
    char cambiaNCuenta[10]; //cambiar numero de cuenta
    char nombreAbuscar[120]; //para buscar nombres


    printf("Programa de alumnos!\n");
    do {
        opcion=menu();
        //system("clear"); // clear en *NIX clr en windows
        //Aqui va la logica principal
        switch (opcion) {
            case 1:
                 printf("Crear una nueva lista de alumnos\n");
                 printf("øCuantos alumnos quieres crear?:");
                 scanf("%d",&cantidad);
                 for(j=0;j<cantidad;j++){
                   printf("Capturando datos del alumno %d\n",j+1);
                   nuevoAlumno();
                 }
                break;
            case 2:
                printf("Guardar lista al archivo\n");
                grabarRegistros(listaAlumnos,indiceAlArreglo);
                break;
            case 3:
                printf("Leer la lista desde el archivo\n");
                indiceAlArreglo=registrosEnArchivo();
                leerRegistros(indiceAlArreglo);
                break;
            case 4:
                printf("Mostrar todos los datos de la lista\n");
                imprimirLista();
                break;
            case 5:
                printf("Agregar nuevo usuario\n");
                if (indiceAlArreglo>=0 && listaAlumnos<MAX);
                {
                	nuevoAlumno();
				            }
                grabarRegistros(listaAlumnos,indiceAlArreglo);
                /* se agrega un autoguardado al sistema */

                break;
            case 6:
                  printf("Calcular promedio\n");

                  for (j=0;j<indiceAlArreglo;j++){
               	    suma+=(listaAlumnos[j].promedio);
                  }
                  printf("El promedio del grupo es: %.2f",suma/(indiceAlArreglo));

                break;
            case 7:
            printf("Dame el nombre a buscar: ");
            scanf("%*c%[^\n]",&nombreAbuscar);
            for (j=0;j<=indiceAlArreglo;j++)
            {
              if (strcmp(nombreAbuscar,listaAlumnos[j].nombre)==0)
                imprimeAlumno(listaAlumnos[j]);
                }
				        break;
            case 8:
                printf("Dame la edad a buscar: ");
                scanf("%d",&buscarEdad);
                for (j=0;j<=indiceAlArreglo;j++)
                {
                  if ((listaAlumnos[j].edad)==buscarEdad)
                  imprimeAlumno(listaAlumnos[j]);
                }
                break;
            case 9:
                printf("Ingrese elemento a eliminar: ");
                scanf("%d", &alumnoEliminar);
                if (alumnoEliminar<=indiceAlArreglo && alumnoEliminar<MAX) {
                  eliminar(listaAlumnos, &indiceAlArreglo, alumnoEliminar);
                  printf("Usted acaba de eliminar un alumno.\n");
                } else {
                  printf("No existe un alumno en esa posicion.\n");
                }

                break;
            case 10:
                printf("Alumno que quieres modificar: \n");
                scanf("%d",&alumno);
                alumno--; //se le resta uno para dar la ubicacion real a la que ve el usuario
                if (alumno>=indiceAlArreglo && alumno<MAX) { /*inicio del if para comparar los parametros dentro de el indiceAlArreglo*/
                  printf("Alumno mal ubicado.\n");
                } else {
                  imprimeAlumno(listaAlumnos[alumno]); //imprime el alumno para ver las opciones a modificar
                  ListaEditar();
                  scanf("%d", &tmp );
                    switch (tmp) {
                      case 1:
                              printf("Vas editar la edad.\n ¿Que edad vas a poner?" );
                              scanf("%d", &cambiaEdad);
                              listaAlumnos[alumno].edad=cambiaEdad;
                              imprimeAlumno(listaAlumnos[alumno]); //imprime el alumno para ver las modificaciones
                              break;

                      case 2:
                              printf ("Genero a cambiar.\nLo vas a cambiar por...  ", listaAlumnos[alumno]);
                              scanf (" %s",&cambiaGenero );
                              strcpy (listaAlumnos[alumno].genero, cambiaGenero);
                              imprimeAlumno(listaAlumnos[alumno]); //imprime el alumno para ver las modificaciones
                              break;
                      case 3:
                              printf("Nombre que deseas modificar\n");
                              scanf("%*c%[^\n]", &cambiaNombre);
                              strcpy (listaAlumnos[alumno].nombre, cambiaNombre);
                              imprimeAlumno(listaAlumnos[alumno]); //imprime el alumno para ver las modificaciones
                              break;
                      case 4:
                              printf("Vas a cambiar la carrera\n ¿Qué carrera deseas poner?");
                              scanf ("%*c%[^\n]", &cambiaCarrera);
                              strcpy (listaAlumnos[alumno].carrera, cambiaCarrera);
                              imprimeAlumno(listaAlumnos[alumno]); //imprime el alumno para ver las modificaciones
                              break;
                      case 5:
                              printf("Vas a cambiar el Numero de Cuenta\n ¿Qué numero de cuenta vas a ingresar?");
                              scanf ("%s", &cambiaNCuenta);
                              strcpy (listaAlumnos[alumno].nCuenta, cambiaNCuenta);
                              imprimeAlumno(listaAlumnos[alumno]); //imprime el alumno para ver las modificaciones
                              break;
                      case 6:
                              printf("Vas editar el promedio.\n ¿Que promedio vas a poner? ");
                              scanf("%f", &temporal);
                              listaAlumnos[alumno].promedio=temporal;
                              imprimeAlumno(listaAlumnos[alumno]); //imprime el alumno para ver las modificaciones
                              break;
                      default:
                              printf ("Opcion no valida");
                  }//fin del else del arreglo
                }

            break;
            case 11:
                editorTexto();
                printf("Fin del editor\n");
                break;
            case 12:
                printf("Total de alumnos: %d", indiceAlArreglo);
                break;
            case 13:
                printf("Alumno mas alto.\n");
                for (j = 0; j <indiceAlArreglo; j++) {
                  if (listaAlumnos[j].promedio>=listaAlumnos[indiceAlArreglo].promedio && listaAlumnos[j].promedio>5.0) {
                    imprimeAlumno(listaAlumnos[j]);
                  }
                }
                break;
           case 14:
                printf("Alumnos reprobados.\n");
                for (j = 0; j <indiceAlArreglo; j++) {
                  if (listaAlumnos[j].promedio<=5.0) {
                    imprimeAlumno(listaAlumnos[j]);
                  }
                }
                break;
            /*case 15:
             printf("Promdio desde el cual deseas buscar\n");
             scanf ("%f", &temporal);
             for (j = 0; j <indiceAlArreglo; j++) {
               if (temporal>=listaAlumnos[j].promedio) {
                 imprimeAlumno(listaAlumnos[j]);
               }
             }
            break;*/
            default:
                printf("Opcion no válida\n");
                break;
        }

    } while (opcion != 0);
    return 0;
}
