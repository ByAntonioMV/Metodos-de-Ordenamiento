#include <stdio.h>

main(){
	int array[10],tam=0,i=0,y=0,x=0,orden=0,izquierda=0,derecha=0,limite=0;
	
	printf ("Ingresa el tamaño del arreglo->");
	scanf ("%d", &tam);
	limite=tam;
	while (i<=tam){
		printf ("Dato ->");
		scanf ("%d", &array [i]);
		
		i++;
	}
	for (x=0;x<=tam;x++){///el mayor va al final y se resta tam 
		for (orden=0;orden<=tam;orden++){	
			if (orden>0){
				if (array[orden]>array[orden+1]){
				derecha=array [orden+1];
				izquierda=array [orden];
				//cambiar de posicion
				array[orden]=derecha;
				array[orden+1]=izquierda;	
				}
			}
		}
		
	}
	for (y=0;y<=tam;y++){
		printf ("[%d]", array[y]);
	}
	
}
