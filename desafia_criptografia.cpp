
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include <math.h>

 void pega_mensagem(char mens[9]);
int  binario_para_descimal(char mens[9]);


int  binario_para_descimal(char mens[9]){
	
  int decimal, sequencia=0, fator_calc=0;
  int vetor_bin[8];
  int valor_decimal;

/****RECEBO O VETOR DE CHAR E CONVERTO EM VETOR DE INTEIROS PARA PODER CALCULAR*/	
	for( int i=0; i<8; i++){
		
		vetor_bin[i] = mens[i] - '0';
	}
	
	
  /**********REALIZO O CALCULO  DE BINARIO PARA DECIMAL*****************/
    for(int i=7; i>=0; i--){
        fator_calc = pow(2,sequencia);
        decimal = decimal + (vetor_bin[i]*fator_calc);
     
        sequencia++;
        fator_calc=0;
       
    } 

   return decimal;	

  }


void pega_mensagem(char mens[9]){
	 int i=0, x=0,j=0;
	 char ultima_pos;
     char penultima_pos;
     char primeira_parte[4];
     char segunda_parte[4];
    static  char novo_vetor[9];
     
  /*-----------INVERTE OS ULTIMOS ALGARISMOS--------------*/   
     for(i=0; i<9; i++){
     	
     	if(i==6){
     		penultima_pos = mens[i];
		 }
		 if(i==7){
		 	ultima_pos = mens[i];
		 	mens[i-1] = ultima_pos;
		 	mens[i]= penultima_pos;
		 }
	 }
	 
	 mens[6]= ultima_pos;
	 mens[7]= penultima_pos;

/********SEPARANDO O VETOR DE 8 BITS EM 2 DE 4 BITS************/	
	 for(i=0; i<9; i++){
     	
       if(i>3){
       	  segunda_parte[j] = mens[i];
       	  j++;
	   }
	 }
	 
	 j=0;
	
	
	  for(i=0; i<9; i++){
     	
       if(i<=3){
       	  primeira_parte[x] = mens[i];
       	  x++;
	   }
	 }
	 x=0;

	
	/*************INVERTENDO O CONJUNTO DE 8 BITS**************/
	 /*1 0 0 1 0 1 1 0*/
     /*0 1 2 3 4 5 6 7*/

	for(i=0; i<9;i++){
			
		if(i<=3){
			novo_vetor[i] = segunda_parte[j];
	 
			j++;
		}
	
	}
j=0;	

for(i=0; i<8; i++){
	
	if(i>=4){
			novo_vetor[i] = primeira_parte[j];

			j++;
		}
	}

	 
	  
    /******IMPRIMINDO A LETRA****** *****************/
	    printf(" %c", binario_para_descimal(novo_vetor));
	 
}

int main()
{
   
   char str_vect [16][9] = { "10010110","11110111","01010110","00000001","00010111","00100110","01010111","00000001","00010111","01110110","01010111","00110110","11110111","11010111","01010111","00000011"};
  
   int i=0, x=0,j=0;
   int decimal;
   for(i=0; i<16; i++){
   	
    pega_mensagem(str_vect[i]);
   	
  
     
   }
     
   return 0;
}