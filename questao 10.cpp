/*Elabore um algoritmo que leia um conjunto de valores inteiros correspondentes a até 80 notas, variando de 0 a 10, dos notaAlunos de uma turma (vários notaAlunos).
Calcule a frequênciade cada nota e apresente uma tabela contendo os valores das notas e suas respectivas frequência.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int notas[11], notaAlunos[80], quantAlunos;
    printf("Quantos alunos tem na sala: ");
    scanf("%d", &quantAlunos);
    srand(time(NULL));
    for (int i = 0; i < 11; i++)
    {
        notas[i] = 0;
    }

    for (int i = 0; i < quantAlunos; i++)
    {
        notaAlunos[i] = (rand() % (10 - 0 + 1)) + 0;
        for (int x = 0; x <= 10; x++)
        {
            if (notaAlunos[i] == x)
            {
                notas[x] += 1;
            }
        }
    }

    for (int i = 0; i <= 10; i++)
    {
        if (notas[i] != 0)
        {
            printf("A nota %d se repitiu: %d\n", i, notas[i]);
        }
    }
    return 0;
}
