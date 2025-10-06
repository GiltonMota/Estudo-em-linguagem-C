#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float nota;
	printf("Digite sua nota:\n");
	scanf("%f", &nota);  
	printf("%2.f\n", nota);   
	             
	if(nota>=0 && nota <= 10){
		
		if (nota>=6) 
		printf("Parabens, voce foi aprovado\n");
		
		else 
		printf("Nao desista voce consegue da proxima vez!\n");
		
		if(nota==10)
		printf("Parabens! Voce fechou a prova! Continue assim!\n");
	}
		
			
	else 
	   printf("Erro: nota invalida!\n");	
	   
	   
	   
		
 int numero;
  
  printf("Digite um numero: ");
  scanf("%d",&numero);
  
  numero >= 5 ? numero++ : numero--;
  
  printf("O novo valor de numero e: %d",numero);
  

  return(0);
		
			
		
		
	
	
		
		

	
	
		return 0;
}

