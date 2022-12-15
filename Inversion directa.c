#include <stdio.h>



main (){
	
	int array[10],n=0,i=0,y=0,x=0,orden=0,dato=0,derecha=0, izquierda=0;
	
	printf ("Ingrese el tamaño del array ->");
	scanf ("%d", &n);
	
	
	while (i<=n){
		printf ("Dato ->");
		scanf ("%d", &array [i]);
		
		i++;
	}
	for (x=0;x<=n;x++){
		if (x>0){
			for (orden=x;orden>0;orden--){
				
				if (array[orden-1]>array[orden]){
					derecha=array [orden-1];
					izquierda=array [orden];
					//cambiar de posicion
					array[orden-1]=izquierda;
					array[orden]=derecha;
				}
			}
		}
	}
	for (y=0;y<=n;y++){
		printf ("[%d]", array[y]);
	}
	
	
}
