#include <stdio.h>
#include <stdlib.h>
#include "info.h"


struct alumnos
{
	 
	int edad;
	char nombre[60];
	char genero;
	char carrera[25];
	char ncuenta[10];
	
};


int main(int argc, char const *agrv[]){
	
	appInfoData("struct","21/11/2017");

    struct alumnos var1;
    
    printf("introduce la edad:");
    scanf("%d",&var1.edad);
    
    printf("Introduce el nombre:");
    fflush(stdin);// limpia el teclado
    gets(var1.nombre);
    
    printf("Edad%d nombre:%s", var1.edad, var1.nombre);



return 0;
 
                                }
