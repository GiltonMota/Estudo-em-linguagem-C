#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct  {
		char nome [50];
		int idade;
		float media;
	} Aluno;
int main(int argc, char *argv[]) {
	
	Aluno aluno1 = {"Joao", 20, 8.5};
	
	printf("Aluno: %s\n", aluno1.nome);
	printf("Idade: %d\n", aluno1.idade);
	printf("Media: %.2f\n", aluno1.media);

	return 0;
}
