#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int altura;

    do
    {
        altura = get_int("Altura: ");
    }
    while (altura < 1 || altura > 8);

    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < altura; j++)
        {
            if (j + i < (altura - 1))
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }

        printf("  ");

        for (int p = 0; p < i + altura - (altura - 1); p++)
        {
            printf("#");
        }
        printf("\n");
    }
}
