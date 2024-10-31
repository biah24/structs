//exemplo 3 - struct com vetor



#include<stdio.h>

struct Aluno{
	char nome [100];
	float nota;
	
};

int main(){ 
	//armazenar alunos sem criar variáveis adicionais
	//vetor: 
	
	//chamar struct
	struct Aluno alunos[2];  //transformar em vetor
	
	//leitura dos dados
	
	for(int i=0; i < 2; i++){
		
		printf("Nome: ");
		fgets(alunos[i].nome, 100, stdin);
		printf("Nota: ");
		scanf("%f", &alunos[i].nota);
		getchar();
		printf("\n");
		
		
	}
	printf("\nDados cadastrados\n");
	for(int i=0; i<2; i++){
		printf("\nAluno: %d\n", i+1);
		printf("Nome: %s", alunos[i].nome);
		printf("Nota: %.2f", alunos[i].nota);
	}
	
	return 0;

}

