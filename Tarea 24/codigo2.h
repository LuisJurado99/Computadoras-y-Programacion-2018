int datoLeido


ptrArchivo=fopen("datos.dat", "rb");

if (prtArchivo==NULL) {
  printf("Error al abrir el archivo\n");
} else {
 while (!feof(ptrArchivo)) {
   fscanf (ptrArchivo, "%d", &datoLeido);
   printf("Dato: %d\n", datoLeido);
 }
 fclose (ptrArchivo);
}
