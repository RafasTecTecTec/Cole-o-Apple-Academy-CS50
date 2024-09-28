#include <stdio.h>
#include <cs50.h>

int collatz(int n, int counter);

int main(void)
{
    int ni = get_int("Fala aí: ");

    int counter = 0;

    printf("%i passos.\n", collatz(ni, counter));
}

int collatz(int n, int counter)
{
    if (n == 1)
    {
        return counter++;
    }

    else if (n % 2 == 0)
    {
        n = n/2;
    }
    else
    {
         n = 3 * n + 1;
    }

    counter++;

    return collatz(n, counter);
}
