#include<stdio.h>
int main(){
	
	//---------------Variaveis--------------//
	float notasAlunos[3];
	int i;
	
	//---------------Repeti�ao--------------//
	for(i=0; i<3; i++)
	{
		printf("Nos informe a sua nota:");
		scanf("%f", &notasAlunos[i]);
	}
		
	//---------------------Estrutura de Condi��o-------------------//
	//---------------------Relat�rio-------------------//
	printf("				Relatorio de Notas \n\n");
	for(i=0; i<3; i++)
	{
		printf("%.1f \n\n", notasAlunos[i]);
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
