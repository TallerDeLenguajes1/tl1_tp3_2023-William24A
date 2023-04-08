#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*int main(){ Primer resultado
	char **V= (char **)malloc(sizeof(char*)*5), buff[20];
	
	for(int i=0;i<5;i++){
		V[i]=(char *)malloc(sizeof(char)*20);
		gets(buff);
		strcpy(V[i], buff);
	}
	
	for(int i=0;i<5;i++){
		printf("%s\n", V[i]);
	}
	
	
	for(int i=0;i<5;i++){ //cuando se use malloc hay que liberar memoria
 		free(V[i]); //primero para los vectores de vectores
 	}
 	free(V);
	return 0;
}*/

int main(){ //segunda opcion
	char **V= (char **)malloc(sizeof(char*)*5), *buff;
	buff=(char *)malloc(sizeof(char)*20);
	for(int i=0;i<5;i++){
		V[i]= (char *)malloc(sizeof(char)*strlen(buff)+1);
		printf("Ingrese un nombre: ");	
		gets(buff);
		strcpy(V[i], buff);
	}
	printf("\nLos nombres ingresados son:\n");
	for(int i=0;i<5;i++){
		printf("%s\n", V[i]);
	}
	
	
	for(int i=0;i<5;i++){ //cuando se use malloc hay que liberar memoria
 		free(V[i]); //primero para los vectores de vectores
 	}
 	free(V);
 	free(buff);
	return 0;
}
