//exemplo 4 - struct com fun��o

#include<stdio.h>

struct Produto {
	char nome [50];
	
};

//fun��o
void exibirProduto(struct Produto produto){
	printf("Nome: %s", produto.nome);
	
}
//fun��o principal
int main(){
	struct Produto p1;
	
	printf("Nome: ");
	fgets(p1.nome, 50, stdin); //chamat a fun��o
	
	exibirProduto(p1);
	
	return 0;
}
