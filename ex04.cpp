//exemplo 4 - struct com função

#include<stdio.h>

struct Produto {
	char nome [50];
	
};

//função
void exibirProduto(struct Produto produto){
	printf("Nome: %s", produto.nome);
	
}
//função principal
int main(){
	struct Produto p1;
	
	printf("Nome: ");
	fgets(p1.nome, 50, stdin); //chamat a função
	
	exibirProduto(p1);
	
	return 0;
}
