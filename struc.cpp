#include<stdio.h>


struct Usuario{
	int idReporter;
	char nome[100];
	
};
int main(){
	struct Usuario usuario;//chamar struct
	
	printf("Cadastro\n");
	
	printf("Matricula: ");
	scanf("%i", &usuario.idReporter);
	
	printf("Nome: ");
	getchar();	
	fgets(usuario.nome, 100, stdin);
	//printf("\n");	
	
	//imprime dados
	printf("Id reporter: %d\n", usuario.idReporter);
	printf("Nome: %s", usuario.nome);
	
	return 0;
	
}
