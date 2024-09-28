#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char mcypher(char p, int k);
int checkf(string t[]);

int main(int argc, string argv[])
{
    if (argc != 2 || checkf(argv))
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    else
    {
        int key = atoi(argv[1]);

        string ptext = get_string("plaintext:  ");

        printf("ciphertext: ");

        // iterando pela mensagem
        for (int i = 0, p = strlen(ptext); i < p; i++)
        {
            if (isalpha(ptext[i]))
            {
                printf("%c", mcypher(ptext[i], key));
            }
            else
            {
                printf("%c", ptext[i]);
            }
        }

        printf("\n");
    }
}

char mcypher(char p, int k)
{
    char ci;

    if (islower(p))
    {
        return ci = (p - 'a' + k) % 26 + 'a';
    }
    else
    {
        return ci = (p - 'A' + k) % 26 + 'A';
    }

    return 0;
}

int checkf(string t[])
{
    int c = 0;

    for (int i = 0, s = strlen(t[1]); i < s; i++)
    {
        if (isalpha(t[1][i]))
        {
            c = c + 1;
        }
        else
        {
            continue;
        }
    }

    return c;
}
