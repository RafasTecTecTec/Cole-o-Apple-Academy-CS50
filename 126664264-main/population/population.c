#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size

    int ni;

    do
    {

        ni = get_int("Numero de Lhamas Inicial: ");
    }

    while (ni < 9);

    // TODO: Prompt for final size

    int nf;

    do
    {

        nf = get_int("Numero de Lhamas Final: ");
    }

    while (nf < ni);

    // TODO: Calculate number of years until we reach threshold

    if (ni == nf)
    {
        printf("Years: 0\n");
    }

    else
    {

        int na = 0;
        int nl = ni;

        do
        {
            nl = (nl + nl / 3) - (nl / 4);

            na++;
        }
        while (nl < nf);

        printf("Years: %i\n", na);
    }

    // TODO: Print number of years
}
