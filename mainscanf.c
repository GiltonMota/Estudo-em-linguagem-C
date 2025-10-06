#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int _usuario;
	printf("Digite seu ID de usuario:\n");
	scanf("%d", &_usuario);
	printf("Seja bem-vindo usuario %d\n", _usuario);
	
	
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
		
		int a, b, c;
		c = a - b; /* A atribuição c = a - b é feita antes que as variáveis a e b recebam os valores informados pelo usuário. Logo, não se sabe o valor delas, o resultado será aleatório*/
		printf("Entre com dois inteiros\n");
		scanf("%d %d", &a, &b);
		printf("A diferença entre %d e %d vale %d\n", a, b, c);
		/*Codigo acima escrito de forma que se obtenha resultado esperado:
		int a, b, c;
		printf("Entre com dois inteiros\n");
		scanf("%d %d", &a, &b);
		c = a - b;
		printf("A diferença entre %d e %d vale %d\n", a, b, c);
		*/
		
		float altura, peso, imc;
		printf("Entre com sua altura e seu peso:\n");
		scanf("%f %f", &altura, &peso);
		imc = (peso/altura)/altura;
		printf("Seu IMC vale %f\n", imc);
		
		char chr1;
		printf("Digite um caractere:\n");
		scanf(" %c", &chr1);
		printf("O cactere digitado foi %c\n", chr1);
		
		
		
	return 0;
}
