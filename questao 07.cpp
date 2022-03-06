#include <stdio.h>
#include <math.h>
int main()
{
    int count, option;
    float CDs[100], higher[100], pecentage;
    printf("Quantos CDs iram ser cadastrados: ");
    scanf("%d", &count);
    for (int i = 1; i <= count; i++)
    {
        printf("Digite o preço do %d CD: ", i);
        scanf("%f", &CDs[i]);
    }

    system("cls");
    printf("1-aumenta 10%% de todos os produtos\n");
    printf("2-informar porcentagem de aumenta de todos os produtos\n");
    printf("Digite uma das opções: ");
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        for (int i = 1; i <= count; i++)
        {
            higher[i] = CDs[i] + (CDs[i] * 0.10);
        }
        break;
    case 2:
        printf("Digite a porcentagem que deseja aumenta nos valores dos CDs: ");
        scanf("%f", &pecentage);
        for (int i = 1; i <= count; i++)
        {
            higher[i] = (CDs[i] + (CDs[i] * (pecentage / 100)));
        }
        break;
    default:
        printf("opção invalida!");
    }
    printf("---------------valores---------------\n");
    printf("| sem aumento     |  com aumento    |\n");
    for (int i = 1; i <= count; i++)
    {
        printf("| %d CD: %.2f       |  %d CD: %.2f      |\n", i, CDs[i], i, higher[i]);
    }
    printf("-------------------------------------\n");
    return 0;
}
