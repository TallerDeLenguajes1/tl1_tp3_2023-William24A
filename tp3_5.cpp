#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){ //segunda opcion
	int tam;
	printf("Ingrese la cantidad de nombres a ingresar:");
	scanf("%d", &tam);
	fflush(stdin);
	char **V= (char **)malloc(sizeof(char*)*tam), *buff;
	buff=(char *)malloc(sizeof(char)*20);
	printf("\n");
	
	for(int i=0;i<tam;i++){
		V[i]= (char *)malloc(sizeof(char)*strlen(buff)+1);
		printf("Ingrese un nombre: ");	
		gets(buff);
		strcpy(V[i], buff);
	}
	
	printf("\nLos nombres ingresados son:\n");
	for(int i=0;i<tam;i++){
		printf("%s\n", V[i]);
	}
	
	
	for(int i=0;i<tam;i++){ //cuando se use malloc hay que liberar memoria
 		free(V[i]); //primero para los vectores de vectores
 	}
 	free(V);
 	free(buff);
	return 0;
}
