#include<stdio.h>
//Escreva um prgrama que declare um vetor de reais e leia as notas de 30 alunos
int main(){
	
	//---------------Variaveis--------------//
	float notasAlunos[30];
	int i;
	
	//---------------Repetiçao--------------//
	for(i=0; i<30; i++)
	{
		printf("Nos informe a sua nota:");
		scanf("%f", &notasAlunos[i]);
	}
		
	//---------------------Estrutura de Condição-------------------//
	//---------------------Relatório-------------------//
	printf("				Relatorio de Notas do Alunos \n\n");
	for(i=0; i<30; i++)
	{
		printf("%.1f \n\n", notasAlunos[i]);
	}
	
	return 0;
}
