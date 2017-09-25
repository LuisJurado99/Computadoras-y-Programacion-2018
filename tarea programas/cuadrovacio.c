#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
int j=0;
	int k=0;
	
	for(j=1;j<=6;j=j+1){			
		for(k=1;k<=6;k=k+1){
						
			if ((k>1 && j!=1) && (k<6 && j!=6))	{
			printf(" ");
			}else{
				printf("+");
			}
		}
		printf("\n");
        }
    return (EXIT_SUCCESS);
}

