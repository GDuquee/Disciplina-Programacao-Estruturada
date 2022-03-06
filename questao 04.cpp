#include <stdio.h>
#include <string.h>

int main()
{
    char letters[30];
    int lenght;
    printf("Digite uma palavra de ate 30 letras: ");
    gets(letters);
    lenght = strlen(letters);
    for (int i = lenght - 1; i >= 0; i--)
    {
        printf("%c", letters[i]);
    }
    return 0;
}
