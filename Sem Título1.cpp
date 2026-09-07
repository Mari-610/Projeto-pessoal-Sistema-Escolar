#include<stdio.h>
#include<string.h>
struct cadastro {
	int situacao;
	int idade;
	char nome[80];
	char tel[20];
	char cpf[16];
	int op;
	};
	
int main() {
	int pc;
	int i;
	printf ("Insira o número de pessoas que deseja cadastrar:\n");
	scanf("%i", &pc);
	struct cadastro pessoa[70];
	for (i=0; i<pc; ++i) {
		printf ("Insira a situação da pessoa a ser cadastrada:\n(1)Aluno\n(2)Professor\n");
		scanf("%i", &pessoa[i].situacao);
		if (pessoa[i].situacao==1) {
		printf ("BEM VINDO AO PORTAL DO ALUNO!");
		printf ("Insira sua idade:\n");
		scanf("%i", &pessoa[i].idade);
		while (getchar() != '\n');
		printf("Insira seu nome completo:\n");
		fgets (pessoa[i].nome, 80, stdin);
		printf ("Insira o número de telefone:\n");
		fgets(pessoa[i].tel, 20, stdin);
		printf ("Insira seu CPF:\n");
		fgets(pessoa[i].cpf, 16, stdin);
		printf("Insira seu curso:\n");
		printf ("Escolha seu curso:(1)Desenvolvimento de Sistemas\n(2)Eletrônica\n(3)Mecânica\n(4)Energias renováveis\n(5)Telecomunicações\n");
		scanf("%i", &pessoa[i].op);
		curso(op);
		printf("\n");
		printf("\nInsira as atuais notas dos alunos:\n");
		notas(media);
	}
}
}
