#include<stdio.h> //Biblioteca padr�o de entrada e sa�da
int main(){
	
	//---------------------Vari�veis-------------------//
	double nota1[5], nota2[5], media[5]; 		  // 3 vetores de tipo double
	int i;
	
	//---------------------Estrutura de Repeti��o-------------------//
	for(i=0; i<5; i++)
	{
		printf("\n Digite a Nota 1:");
		scanf("%lf", &nota1[i]);	
		printf("\n Digite a Nota 2:");
		scanf("%lf", &nota2[i]);
		media[i] = nota1[i] + nota2[i]/2;
		printf("\n A sua Media e de: %lf \n", media[i]);
		
		
	//---------------------Estrutura de Condi��o-------------------//
	//---------------------Aprovado e Reprovado-------------------//
			if(media[i] > 8)
		{
			printf("\n Parabens, voce foi aprovado! \n\n");
		}
			else printf("\n Infelizmente voce foi reprovado\n\n");
	}
	//---------------------Estrutura de Condi��o-------------------//
		//---------------------Relat�rio-------------------//
	printf("				Relat�rio\n");
	printf("Nota 1 - Nota 2 - Media \n");
	for(i=0; i<5; i++)
	{
		printf("%.1lf - %.1lf - %.1lf \n", nota1[i], nota2[i], media[i]);
	}
	
	
	
	
	
	
	return 0;
}
