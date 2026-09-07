#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>
float notas(float media) {
	float N[4];
	printf("1 bimestre:\n");
	scanf ("%f", &N[0]);
	while (getchar() != '\n');
	printf("2 bimestre:\n");
	scanf("%f", &N[1]);
	while (getchar() != '\n');
	printf("3 bimestre:\n");
	scanf("%f", &N[2]);
	while (getchar() != '\n');
	printf("4 bimestre:\n");
	scanf("%f", &N[3]);
	while (getchar() != '\n');
	printf("As notas são:\n%f\n%f\n%f\n%f\n", N[0], N[1], N[2], N[3]);
	media=((N[0]+N[1]+N[2]+N[3])/4);
	printf("A média do aluno é: %.2f", media);
	if (media>=6) {
		printf("Aprovado!\n");
	}
	else {
		printf("Reprovado\n");
	}
	return media;
}
void curso (int op) {
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
	char disciplina[70];
	float salario;
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
	int pc = 0;
	int i;
	char disciplina;
	float salario;
	struct cadastro pessoa[70];
	printf ("Olá, seja bem-vindo!");
	do {
	printf("Insira abaixo o número correspondente a ação que deseja executar!");
	printf("\n-------------------------------------------------------------------\n");
	printf("\nInsira:\n (1) Cadastrar\n(2)Verificar cadastro\n(3)Alterar\n(4)Remover\n(5)Sair\n");
	scanf("%i", &menu);
	while (getchar() != '\n');
	switch (menu) {
		case 1:
		printf ("1 - CADASTRO\n");
		printf ("Insira o número de pessoas que deseja cadastrar:\n");
		scanf("%i", &pc);
		while (getchar() != '\n');
		printf ("Insira a situação da pessoa a ser cadastrada:\n(1)Aluno\n(2)Professor\n");
		scanf("%i", &situacao);
		while (getchar() != '\n');
		for (i=0; i<pc; ++i) {
			pessoa[i].situacao=situacao;
		if (pessoa[i].situacao==1) {
		printf ("\nBEM VINDO AO PORTAL DO ALUNO!\n");
		printf ("Insira sua idade:\n");
		scanf("%i", &pessoa[i].idade);
		while (getchar() != '\n');	
		printf("Insira seu nome completo:\n");
		fgets (pessoa[i].nome, 80, stdin);
		pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
		printf ("Insira o número de telefone:\n");
		fgets(pessoa[i].tel, 20, stdin);
		pessoa[i].tel[strcspn(pessoa[i].tel, "\n")] = '\0';
		printf ("Insira seu CPF:\n");
		fgets(pessoa[i].cpf, 16, stdin);
		pessoa[i].cpf[strcspn(pessoa[i].cpf, "\n")] = '\0';
		printf("Insira seu curso:\n");
		printf ("Escolha seu curso:\n(1)Desenvolvimento de Sistemas\n(2)Eletrônica\n(3)Mecânica\n(4)Energias renováveis\n(5)Telecomunicações\n");
		scanf("%i", &pessoa[i].op);
		while (getchar() != '\n');
		curso(pessoa[i].op);
		printf("\n");
		printf("\nInsira as atuais notas dos alunos:\n");
		pessoa[i].media = notas(pessoa[i].media);
		}
		else {
			printf ("\nBEM VINDO AO PORTAL DO PROFESSOR!\n");
					printf ("Insira sua idade:\n");
					scanf("%i", &pessoa[i].idade);
					while (getchar() != '\n');
					printf("Insira seu nome completo:\n");
					fgets (pessoa[i].nome, 80, stdin);
					pessoa[i].nome[strcspn(pessoa[i].nome, "\n")] = '\0';
					printf ("Insira o número de telefone:\n");
					fgets(pessoa[i].tel, 20, stdin);
					pessoa[i].tel[strcspn(pessoa[i].tel, "\n")] = '\0';
					printf ("Insira seu CPF:\n");
					fgets(pessoa[i].cpf, 16, stdin);
					pessoa[i].cpf[strcspn(pessoa[i].cpf, "\n")] = '\0';
					printf ("Insira sua disciplina:\n");
					fgets(pessoa[i].disciplina, 70, stdin);
					pessoa[i].disciplina[strcspn(pessoa[i].disciplina, "\n")] = '\0';
					printf("Insira o salário, use ponto para as casas decimais:\n");
					scanf("%f", &pessoa[i].salario);
					while (getchar() != '\n');				
				}
	}
		system("cls");
		printf ("\n__________PESSOAS CADASTRADAS__________\n");
		for (i=0; i<pc; ++i) {
			if (pessoa[i].situacao==1) {
				printf ("Pessoa: %s\n", pessoa[i].nome);
				printf ("Idade: %i\n", pessoa[i].idade);
				printf ("Telefone: %s\n", pessoa[i].tel);
				printf("CPF: %s\n", pessoa[i].cpf);
				printf ("Média: %.2f\n", pessoa[i].media);
			}
			else {
				printf ("Pessoa: %s\n", pessoa[i].nome);
				printf ("Idade: %i\n", pessoa[i].idade);
				printf ("Telefone: %s\n", pessoa[i].tel);
				printf("CPF: %s\n", pessoa[i].cpf);
				printf("Disciplina: %s\n", pessoa[i].disciplina);
				printf("Salário: %.2f\n", pessoa[i].salario);
			}
		}
		break;
		case 2:
			char *p;
			char busca[80];
			int encontrado = 0;
			int tent;
			printf ("_____Busca_____\n");
			printf ("Insira o nome completo da pessoa cadastrada:\n");
			fgets(busca, 80, stdin);
			busca[strcspn(busca, "\n")] = '\0';
			for (i=0; i<pc; ++i) {
				p = strstr(pessoa[i].nome, busca);
			if (p != NULL) {
				printf ("Cadastro encontrado!\n");
				printf ("%s\n", pessoa[i].nome);
				printf ("%i\n", pessoa[i].idade);
				printf("%s\n", pessoa[i].tel);
				printf ("%s\n", pessoa[i].cpf);
				encontrado=1;
			}
		}
			if (encontrado==0) {
				printf ("Cadastro não encontrado.\nInsira (1) para buscar outro nome ou (0) para fechar");
				scanf ("%i", &tent);
				while (getchar() != '\n');
				if (tent==1) {
					for (i=0; i<pc; ++i) {
					p = strstr(pessoa[i].nome, busca);
					if (p != NULL) {
					printf ("Cadastro encontrado!\n");
					printf ("%s\n", pessoa[i].nome);
					printf ("%i\n", pessoa[i].idade);
					printf("%s\n", pessoa[i].tel);
					printf ("%s\n", pessoa[i].cpf);
					encontrado=1;
					}							
				}
			}
			else {
				printf("Não encontrado!");
			}
		}
	break;
}
	}
	while (menu != 5);
		return 0;
	}

