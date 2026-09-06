#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
float notas(float media) {
	float N[4];
	printf("1 bimestre:\n");
	scanf ("%f", &N[0]);
	printf("2 bimestre:\n");
	scanf("%f", &N[1]);
	printf("3 bimestre:\n");
	scanf("%f", &N[2]);
	printf("4 bimestre:\n");
	scanf("%f", &N[3]);
	printf("As notas são:\n%f\n%f\n%f\n%f\n", N[0], N[1], N[2], N[3]);
	media=((N[0]+N[1]+N[2]+N[3])/4);
	printf("A média do aluno é: %.2f", media);
	if (media>7) {
		printf("Aprovado!\n");
	}
	else {
		printf("Reprovado\n");
	}
	return media;
}
int curso (int op) {
	if (op==1) {
		printf("Aluno matriculado em Desenvolvimento de Sistemas");
	}
	else if (op==2){
		printf("Aluno matriculado em Eletrônica");
	}
	else if (op==3){
		printf("Aluno matriculado em Mecânica");
	}
	else if (op==4){
		printf("Aluno matriculado em Sistemas de energia renovável");
	}
	else if (op==5){
		printf("Aluno matriculado em Telecomunicações");
	}
	else {
		printf("Inválido");
	}
}

struct cadastro {
	int situacao;
	int idade;
	char nome[80];
	char tel[20];
	char cpf[16];
	int op;
	float media;
	};
	
int main(void) {
	setlocale(LC_ALL,"");
	int menu;
	int situacao;
	int idade;
	char nome[80];
	char tel[20];
	char cpf[16];
	int op;
	float media;
	int pc;
	int i;
	printf ("Olá, seja bem-vindo!");
	printf("Insira abaixo o número correspondente a ação que deseja executar!");
	printf("\n-------------------------------------------------------------------\n");
	printf("\nInsira:\n (1) Cadastrar\n(2)Acessar\n(3)Alterar\n(4)Pesquisar\n(5)Remover\n(6)Sair\n");
	scanf("%i", &menu);
	switch (menu) {
		case 1:
		printf ("1 - CADASTRO\n");
		printf ("Insira o número de pessoas que deseja cadastrar:\n");
		scanf("%i", &pc);
		struct cadastro pessoa[70];
		for (i=0; i<pc; ++i) {
		printf ("Insira a situação da pessoa a ser cadastrada:\n(1)Aluno\n(2)Professor\n");
		scanf("%i", &pessoa[i].situacao);
		if (pessoa[i].situacao==1) {
		printf ("\nBEM VINDO AO PORTAL DO ALUNO!\n");
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
		printf ("Escolha seu curso:\n(1)Desenvolvimento de Sistemas\n(2)Eletrônica\n(3)Mecânica\n(4)Energias renováveis\n(5)Telecomunicações\n");
		scanf("%i", &pessoa[i].op);
		curso(pessoa[i].op);
		printf("\n");
		printf("\nInsira as atuais notas dos alunos:\n");
		pessoa[i].media = notas(pessoa[i].media);
		}
		else {
			printf ("\nBEM VINDO AO PORTAL DO PROFESSOR!\n");
		}
		}
		system("cls");
		printf ("\n__________PESSOAS CADASTRADAS__________\n");
		for (i=0; i<pc; ++i) {
			printf ("Pessoa: %s\n", pessoa[i].nome);
			printf ("Idade: %i\n", pessoa[i].idade);
			printf ("Telefone: %s\n", pessoa[i].tel);
			printf("CPF: %s\n", pessoa[i].cpf);
			if (pessoa[i].situacao==1) {
				printf ("Média: %.2f\n", pessoa[i].media);
			}
			else {
				printf ("Professor\n");
			}
		}
		break;
		}
		return 0;
	}

