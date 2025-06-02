#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
		int numero;
		printf("Entre com um numero:");
		scanf("%d", &numero);
		printf("O numero informado pelo usuario foi %d\n", numero);
		
		float dividendo, divisor;
		printf ("Entre com dois numeros reais:\n");
		scanf ("%f %f", &dividendo, &divisor);
		printf ("A divisao de %2.f por %2.f vale %2.f \n", dividendo, divisor, dividendo/divisor);
		
		char ch1, ch2;
		printf("Entre com duas letras:\n");
		scanf(" %c", &ch1); /* inseri um espaço antes do formato d eleitura nas duas strings para limpar o buffer do teclado e não ler a tecla ENTER*/
		scanf(" %c", &ch2);		
		printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
		
	return 0;
}
