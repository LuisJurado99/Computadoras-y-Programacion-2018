#ifndef FUNCIONES1_H
#define FUNCIONES1_H
#define IVA 0.16
float fniva (float a){
float siva=0.0f;
siva= a*IVA;
return siva;
}
float fnsiniva (float b) {
float siniva=0.0f;
siniva = b - (b*IVA);
return siniva;
}

#endif
