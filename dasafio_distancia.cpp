#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int i=0, j=0;
	int distancia, menor_dist=100;
    int array_01[10] = {1, 2, 4, 6, 10,12,15,20,21,28}; 
    int array_02[10] = {3, 7, 8, 11,13,16,22,25,26,30}; 
   
    for(i=0; i < 10; i++){
    	
    	for(j=0; j < 10; j++){
    		
    		distancia = abs(array_01[i] - array_02[j]); //  USEI A FUNCAO ABS PARA RETORNO DE UM NRO SEM SINAL APENAS COM SEU VALOR ABSOLUTO
    		
    		if(distancia < menor_dist){
    			
    			menor_dist  = distancia;
    		
			}
		}
	}

    
    printf("MENOR DISTANCIA ENCONTRADA: %d\n", menor_dist);

    return 0;
}