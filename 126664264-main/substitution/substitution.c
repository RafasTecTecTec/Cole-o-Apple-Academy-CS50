#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int checkv(string s);
int checks(string s);
void cypherm(string t, string a);

int main(int argc, string argv[])
{
    // checar argumento para ser < 26, mesma letra mais de 1 vez, ter chars nonalpha
    if (argc == 2)
    {
        if (checks(argv[1]) == 0 && checkv(argv[1]) == 0)
        {
            // prompt para texto a ser cifrado
            string ptext = get_string("plaintext:  ");
            // fazedor de cypher
            cypherm(ptext, argv[1]);
        }
        else
        {

            printf("INVÁLIDO\n");

            return 1;
        }
    }
    else
    {
        return 1;
    }
}

int checks(string s)
{
    // começar pelo tamanhho > chars nonlpha e então mesma letra
    if (strlen(s) == 26)
    {
        // testar todos os characteres para serem letras
        for (int i = 0; i < 26; i++)
        {
            if (!isalpha(s[i]))
            {
                return 1;
            }
            else
            {
                continue;
            }
        }
    }
    else
    {
        return 1;
    }

    return 0;
}

int checkv(string s)
{
    for (int i = 0; i < 26; i++)
    {

        int count = 0;

        for (int j = 0; j < 26; j++)
        {
            if (tolower(s[i]) == tolower(s[j]))
            {
                count++;
            }
            else
            {
                continue;
            }
        }

        if (count != 1)
        {
            return 1;
        }
    }
    return 0;
}

void cypherm(string t, string a)
{

    printf("ciphertext: ");

    for (int i = 0, l = strlen(t); i < l; i++)
    {
        if (isalpha(t[i]))
        {
            if (islower(t[i]))
            {
                int place = t[i] - 'a';
                printf("%c", tolower(a[place]));
            }
            else
            {
                int place = t[i] - 'A';
                printf("%c", toupper(a[place]));
            }
        }
        else
        {
            printf("%c", t[i]);
        }
    }

    printf("\n");
}
