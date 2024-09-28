#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int lcalc(string ptext);
int wcalc(string ptext);
int scalc(string ptext);
int cli(int letters, int words, int sents);

int main(void)
{
    string ptext = get_string("Texto: ");

    // Contar as letras palavras e frases do texto

    int letters = lcalc(ptext);

    int words = wcalc(ptext);

    int sents = scalc(ptext);

    // aplicar coleman liau index]

    int grade = cli(letters, words, sents);

    // dar o resultado ;D

    if (grade >= 1 & grade <= 16)
    {
        printf("Grade %i\n", grade);
    }

    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }

    else
    {
        printf("Grade 16+\n");
    }
}

///////////////////////////////////////////////////////////

int lcalc(string ptext)
{
    int letters = 0;

    for (int i = 0; i < strlen(ptext); i++)
    {
        if (isalpha(ptext[i]) || isalnum(ptext[i]))
        {
            letters++;
        }
        else
        {
            continue;
        }
    }

    return letters;
}

int wcalc(string ptext)
{
    int words = 0;

    for (int i = 0; i < strlen(ptext); i++)
    {
        if (isspace(ptext[i]))
        {
            words++;
        }
        else
        {
            continue;
        }
    }

    return words + 1;
}

int scalc(string ptext)
{
    int sents = 0;

    for (int i = 0; i < strlen(ptext); i++)
    {
        if (ptext[i] == '.' || ptext[i] == '!' || ptext[i] == '?')
        {
            sents++;
        }
        else
        {
            continue;
        }
    }

    return sents;
}

int cli(int letters, int words, int sents)
{
    float lettersm = 100.0 * letters / words;

    float sentsm = 100.0 * sents / words;

    float grade = 0.0588 * lettersm - 0.296 * sentsm - 15.8;

    return (int) round(grade);
}
