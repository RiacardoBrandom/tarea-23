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

typedef struct alumnos ALUMNO;

int main (int argc, char *argv[]){
         appInfoData("struct","21/11/2017");}
         
    ALUMNO nuevoAlumno(int argc, char *argv[]){
	
	       
		   ALUMNO tmp;
           printf("introduce la edad:");
           scanf("%d",&tmp.edad);
    
    printf("Introduce el nombre:");
    fflush(stdin);// limpia el teclado
    gets(tmp.nombre);
    
           printf("introduce el genero:");
           scanf("%c",&tmp.genero);
    
    printf("Introduce carrera:");
    fflush(stdin);// limpia el teclado
    gets(tmp.carrera);
    
    printf("introduce el numero de cuenta:");
    fflush(stdin);// limpia el teclado
    gets(tmp.ncuenta);

return tmp;
        
}
