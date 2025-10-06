#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	float av1, av2, av3, media;
	
	printf("Digite sua nota da Avaliacao 1:\n");
	scanf("%f", &av1);
	
	printf("Digite sua nota da Avaliacao 2:\n");
	scanf("%f", &av2);
	
	printf("Digite sua nota da Avaliacao 3:\n");
	scanf("%f", &av3);
	
	media =  (av1 + av2 + av3) / 2;
	printf("%2.f\n", media); 
		
	if(media>=6)
		printf("Parabens, voce foi aprovado");
	else
		printf("tente melhorar na proxima");
		
		printf("\n_______________________________\n");
		
	int A, B ;		
		printf("\nDigite um numero:\n");
		scanf("%d", &A);
		
		printf("Digite outro numero:\n");
		scanf("%d", &B);
		
	if(A>B)
		printf("\nA maior que B\n");
	else if (A<B)
		printf("\nB maior que A");
	if (A==B)
		printf("\nnumeros iguais\n");
		
	
	
		
		
		
		
		
		
	
	
	return 0;
}
