/*
*Programa: Definir por apuntadores cual es el menor y el mayor
*Fecha: 04/10/2018
*Creador: Juan Diego Rios Ballesteros
*/

#include <stdio.h>

//Funcion principal
int main(){
	int vector[100], c, bandera=0, mayor, menor;
	int *p_vec = vector, *p_menor = &menor, *p_mayor = &mayor;
	// Ingresamos cuantos numeros se escribiran
	printf("Ingrese cuantos numeros va a ingresar: ");
	scanf("%d", &c);
	// Pedimos los numeros
	for(int i = 0;i < c; i++){
		printf("Ingrese el numero %d: ", i+1);
		scanf("%d", &vector[i]);
		// sacamos cual es el mayor y el menor
		if(bandera == 0){
			*p_menor = *p_vec;
			*p_mayor = *p_vec;
			bandera = 1;
		}else if(menor > *p_vec){
			*p_menor = *p_vec;
		}else{
			*p_mayor = *p_vec;
		}
		p_vec++;
	}
	printf("El mayor es: %d\n", *p_mayor);
	printf("El menor es: %d ", *p_menor);
	
	
	
}
