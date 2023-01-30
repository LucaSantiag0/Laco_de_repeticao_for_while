#include <stdio.h>
#include <stdlib.h>
int main() {
  
  /*Faca um programa que leia um numero não determinado de pares de valores [m,n], todos inteiros e positivos, um par de cada vez, e que
   calcule e mostre a soma de todos os números inteiros entre m e n (inclusive). A digitacao de pares terminará quando m for maior ou igual a n.*/
	
	
	int M,N,maior,x,menor,soma=0;
	int menu = 0;
	system("cls");
	printf("Informe o 1 valor\n");
	scanf("%d",&M);
	
	printf("Informe o 2 valor\n");
	scanf("%d",&N); 
	 

		while(M>0 && N>0)
		{
		
   
	           
	      if (M>=N)
	      {
	               maior = M;
	               menor = N;
	               }
	               else
	               {
	                   maior = N;
	                   menor = M;
	                   }
	                    
	                    
	                   for (x = menor; x<=maior; x++){
	                    
	                   soma = soma+x;
	                    
	                   printf("%d\n ",x);
	                    
	                    
	                   }
	                   	printf("Sum=%d\n",soma);
	                   	soma = 0;
	                   	system("pause");
	                   
					   	system("cls");
						printf("Informe o 1 valor\n");
						scanf("%d",&M);
						
						printf("Informe o 2 valor\n");
						scanf("%d",&N); 
					   
	                    
	                    
	                   soma = 0;
	                
				}	
    return 0;
    system("pause");
}
