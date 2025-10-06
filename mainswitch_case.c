#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	int opcao;
	printf("1 - Inserir novo cliente\n"); 
	printf("2 - Consultar cliente por CPF\n"); 
	printf("3 - Consultar cliente por nome\n"); 
	printf("4 - Remover cliente da base de clientes\n");
	printf("Qualquer outro numero para sair.\n");
	
	printf("Digite uma opcao: ");
	scanf("%d", &opcao);
	
	switch (opcao){
	
		case 1:
			printf("Inserir novo cliente\n Digite nome:\n Digite o CPF:");
			break;
		case 2:
			printf("Digite CPF do cliente:\n");
			break;
		case 3:
			printf("Digite nome do cliente\n");
			break;
		case 4:
			printf("Removendo cliente da base:\n Digite o CPF:\n");	
			break;
		default:
			printf("Saindo do sistema");
			break;
}

	
	return 0;
}
