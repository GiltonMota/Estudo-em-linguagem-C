#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int cont, i;
	printf ("Digite um numero para gerar a tabuada correspondente:\n");
	scanf("%d", &cont);
	
	for (i=0; i<=10; i++){
	printf ("%d x %d =%d\n",cont, i, cont*i);
	
}
/*comando "limpar tela" => system("clear||cls");*/
	return 0;
}
