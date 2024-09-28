#include <cs50.h>
#include <stdio.h>

long get_card(void);
int check_card(long NUM);
void checktype(long card);

int main(void)
{
    // Prompt for card :D
    long NUM = get_long("Informe o número do cartão: ");

    if (NUM < 999999999999)
    {
        printf("INVALID\n");
    }

    else
    {
        if (check_card(NUM) == 0)
        {
            checktype(NUM);
        }

        // Check for card lenght check starting digit
        // Print AMEX, MASTERCARD, VISA or INVALID
        else
        {
            printf("INVALID\n");
        }
    }
}

/////////////////////////////////////////////////////////////////

int check_card(long NUM)
{
    int ga = 0;

    int gb = 0;

    int g;

    int vcheck = 0;

    while (NUM > 0)
    {
        g = NUM % 10;

        if (vcheck % 2 != 0)
        {
            g = g * 2;

            if (g > 9)
            {
                g -= 9;

                ga = ga + g;
            }
            else
            {
                ga = ga + g;
            }
        }

        else
        {
            gb = gb + g;
        }

        NUM /= 10;
        vcheck++;
    }

    int gf = ga + gb;

    if (gf % 10 == 0)
    {
        return 0;
    }

    return 1;
}

void checktype(long card)
{
    int count = 0;

    long control = card;

    while (control > 0)
    {
        count++;

        control /= 10;
    }

    if (count == 15 & card / 10000000000000 == 34 || count == 15 & card / 10000000000000 == 37)
    {
        printf("AMEX\n");
    }

    else if (count == 13 & card / 1000000000000 == 4)
    {
        printf("VISA\n");
    }

    else if (count == 16)
    {
        if (card / 100000000000000 > 49 & card / 100000000000000 < 56)
        {
            printf("MASTERCARD\n");
        }

        else if (card / 1000000000000000 == 4)
        {
            printf("VISA\n");
        }

        else
        {
            printf("INVALID\n");
        }
    }

    else
    {
        printf("INVALID\n");
    }
}
