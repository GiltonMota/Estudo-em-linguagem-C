#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char alfabeto[27] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int numero;
	scanf("%d", &numero);
	if (numero > 26 || numero <1) {
		printf("numero invalido\n");
		return 0;
	}
	int b;
	
	for(int i = 0; numero > i; i++){
		printf("%c ", alfabeto[i]);
	}
	
	
	return 0;
}
