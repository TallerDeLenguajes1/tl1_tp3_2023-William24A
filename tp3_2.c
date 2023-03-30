#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int **matriz= (int **)malloc(sizeof(int*)*5); //reserva de memoria para un vector de punteros
 	int i,j, max=0, maxi, maxj, min=50000, mini, minj;
 	float suma,prom=0;
 	
 	srand(time(NULL));
	for(i=0;i<5;i++){
		matriz[i]=(int *)malloc(sizeof(int)*12); //reserva de memoria de puntero del vector de puntero
 		for(j=0;j<12;j++){
 			matriz[i][j]=10000+rand()%40000; //asignar valores random
 			printf("%d ", matriz[i][j]);//mostrar valor del puntero
 		}
 		printf("\n");
 	}
 	printf("\n");
 	//mostrar valor promedio
 	for(i=0;i<5;i++){
 		suma=0;
 		for(j=0;j<12;j++){
 			suma += matriz[i][j];
 		}
 		prom= suma/12;
 		printf("\nPromedio del anio: %d es %f", 2018+i, prom);
 	}
 	//mostrar valor maximo y minimo y su fecha
 	for(i=0;i<5;i++){
 		for(j=0;j<12;j++){
 			if( matriz[i][j] > max){
 				max = matriz[i][j];
 				maxi=i;
 				maxj=j;
 			}else{
 				if(matriz[i][j] < min){
 					min = matriz[i][j];
 					mini=i;
 					minj=j;
 				}
 			}
 		}	
 	}
 	printf("\n\n");
 	switch(maxj){
 		case 0:
 			printf("El maximo fue en Enero del ");
 			break;
 		case 1:
 			printf("El maximo fue en Febrero del ");
 			break;
		case 2:
			printf("El maximo fue en Marzo del ");
 			break;
		case 3:
			printf("El maximo fue en Abril del ");
 			break;
		case 4:
			printf("El maximo fue en Mayo del ");
 			break;
		case 5:
			printf("El maximo fue en Junio del ");
 			break;
		case 6:
			printf("El maximo fue en Julio del ");
 			break;
		case 7:
			printf("El maximo fue en Agosto del ");
 			break;
		case 8:
			printf("El maximo fue en Septiembre del ");
 			break;
		case 9:
			printf("El maximo fue en Octubre del ");
 			break;
		case 10:
			printf("El maximo fue en Noviembre del ");
 			break;
		case 11:
			printf("El maximo fue en Diciembre del ");
 			break;
 	}
 	printf("%d es: %d\n", 2018+maxi, max);
 	
 	switch(minj){
 		case 0:
 			printf("El minimo fue en Enero del ");
 			break;
 		case 1:
 			printf("El minimo fue en Febrero del ");
 			break;
		case 2:
			printf("El minimo fue en Marzo del ");
 			break;
		case 3:
			printf("El minimo fue en Abril del ");
 			break;
		case 4:
			printf("El minimo fue en Mayo del ");
 			break;
		case 5:
			printf("El minimo fue en Junio del ");
 			break;
		case 6:
			printf("El minimo fue en Julio del ");
 			break;
		case 7:
			printf("El minimo fue en Agosto del ");
 			break;
		case 8:
			printf("El minimo fue en Septiembre del ");
 			break;
		case 9:
			printf("El minimo fue en Octubre del ");
 			break;
		case 10:
			printf("El minimo fue en Noviembre del ");
 			break;
		case 11:
			printf("El minimo fue en Diciembre del ");
 			break;
 	}
 	printf("%d es: %d", 2018+mini, min);
 	
 	for(i=0;i<5;i++){ //cuando se use malloc hay que liberar memoria
 		free(matriz[i]); //primero para los vectores de vectores
 	}
 	free(matriz);//despues para el vector de vectores
    return 0;   
}
