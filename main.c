	#include <stdio.h>
	#include <stdlib.h>
	
	/* #include <stdio.h> --- Inclui a biblioteca padrão de entrada/saída para funções como printf. */
	/* %d --- representa um valor inteiro decimal, usado nas funções printf()"saída" e Scanf () "entrada"*/
	/* %c --- representa um caracter Char
	/* %.2f --- indica que o valor a ser substituído será um número de ponto flutuante com duas casas decimais.
	/* \n --- pula uma linha*/
	/* int main(){} --- Define a função principal onde o código começa a ser executado.
	printf() --- imprime os valores das variáveis no console*/
	
	
	int main(){
		
		 
	int cont = 1;
		cont = cont + 1;	
	
	
	float divisao = 5;
		divisao = divisao / 2;
	
	char D = 'z'; /* caractere tem que estar entre aspas simples, variável não*/
		char escolha = D;
		escolha = escolha - 2;
	
	int a, b, c, d;
		a = 10;
		b = a + 1;
		c = b + 1;
		d = c + 1;
		a = b = d = 20;
	
	int x, y, z;
	
		x = 10;
		y = x + 1;
		z = y + 2;
		
	char ch1, ch2, ch3;
		ch1 = 'H';
		ch2 = 'o';
		ch3 = 'W	';
		
	
	printf("A variavel d possui o valor: %d\n", d);
	printf("A variavel c possui o valor: %d\n", c);
	printf("A variavel cont ao final possui o valor: %d \n", cont );
	printf("A variavel divisao ao final possui o valor:%.2f \n", divisao);
	printf("A variavel escolha possui o valor: %c\n", escolha);
	printf("Atualmente, temos x = %d, y = %d e z = %d\n", x, y, z);
	printf("%cell%c %corld!\n", ch1, ch2, ch3);
	
	
	return 0;


	


}


