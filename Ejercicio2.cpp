/*
*Programa: ingresar 10 numeros por el usuario usando un vector, y ordenarlos de forma ascendente y descendente
*Fecha: 06/10/2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

// Funcion principal
int main(){
	int vector[10], i, j, aux;
	int *p_vec, *p_aux;
	p_vec = vector;
	p_aux = &aux;
	//Llenamos el vector con los numeros
	printf("ingrese 10 numeros\n");
	for(i = 0; i < 10; i++){
		printf("ingrese el numero %d: ",i+1);
		scanf("%d", &vector[i]);
	}
	//se realiza la ordenacion de los numeros
	for (i = 0; i < 10 - 1; i++) {
		for (j = 0; j < 10 - 1; j++) {
			if (*(p_vec + j) > *(p_vec +j + 1)) {
				*p_aux = *(p_vec + j);
				*(p_vec + j) = *(p_vec + j + 1);
				*(p_vec + j + 1) = *p_aux;
			}
		}
	}
	//se imprimen los numeros
	printf("\nAscendete:\n");
	for (i = 0; i < 10; i++) {
		printf("%d", *(p_vec + i));		
	}
	printf("\nDecendente:\n");
	for (i = 9; i >= 0; i--) {
		printf("%d", *(p_vec + i));
	}
	
	
	
	
	
	
}
