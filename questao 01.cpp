
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int nota[30];

    for (int i = 1; i <= 30; i++)
    {
        printf("Digite a nota do %d aluno: ", i);
        scanf("%d", &nota[i]);
    }
    system("cls");
    for (int i = 1; i <= 30; i++)
    {
        printf("A nota do %d aluno é: %d\n", i, nota[i]);
    }
    return 0;
}
