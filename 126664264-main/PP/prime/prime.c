#include <cs50.h>
#include <stdio.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
}

bool prime(int number)
{
    if (number == 2)
    {
        return true;
    }

    if (number % 2 == 0 || number == 1)
    {
        return false;
    }

    for (int n = 2; n < number; n++)
    {
        if (number % n == 0)
        {
            return false;
        }
    }

    return true;
}

