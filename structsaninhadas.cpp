//exemplo 2 - strucs aninhadas

#include<stdio.h>

struct Endereco{
	
	char cidade[40];
	char estado[4];
	
};

struct Cliente{
	
	char nome [100];
	char cpf [13];
	//endere�o - pq pode ter v�rios endere�os 
	struct Endereco endereco;
};

int main(){
	struct Cliente cliente;
	
	printf("Cadastro de cliente\n");
	printf("Nome: ");
	fgets(cliente.nome, 100, stdin);
	printf("CPF: ");
	fgets(cliente.cpf, 13, stdin);
	
	//Cliente -> chego no estado
	printf("Cidade: ");
	fgets(cliente.endereco.cidade, 40, stdin);
	
	//impress�o
	
	printf("Dados do cliente\n");
	printf("Nome: %s", cliente.nome);
	printf("CPF: %s", cliente.cpf);
	printf("Cidade: %s", cliente.endereco);
	
	
	}
