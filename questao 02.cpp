#include <stdio.h>

int main()
{
    int numAlunos, nota[50];
    printf("Quantos alunos tem na sala: ");
    scanf("%d", &numAlunos);
    system("cls");
    for (int i = 1; i <= numAlunos; i++)
    {
        printf("Digite a nota do %d aluno: ", i);
        scanf("%d", &nota[i]);
    }
    system("pause");
    system("cls");
    for (int i = 1; i <= numAlunos; i++)
    {
        printf("A nota do %d aluno é: %d\n", i, nota[i]);
    }
    return 0;
}
