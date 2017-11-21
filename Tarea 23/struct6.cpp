#include <stdio.h>
#include <stdlib.h>
#include "alumnos.h"
#include "info.h"
#define MAX 3

int main(int argc, char const *agrv[]){

	appInfoData("struct","21/11/2017");
/*

    ALUMNO var1;
    var1= nuevoAlumno();
    Imprime alumno (var1);
    */
    ALUMNO lista [MAX];
    int j=0
    for (j=0,j<MAX;++){
    	printf("datos del alumno%d\n",j+1);
    	lista [j]=nuevoAlumno();
	}
    
    For(j=0<MAX;j++);{
	imprimeAlumno(lista[j]);
	
	}



return 0;
 
       
	   
	    }
