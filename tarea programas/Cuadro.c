#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int j=0;
    int k=0;
    for (j=1; j<=6; j++){
        for (k=1; k<=6; k++){
            printf("+");
        }
        printf ("\n");
    }
    return (EXIT_SUCCESS);
}

