#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int calc_score(string word);

int main(void)
{
    // Chama nos playera
    string word1 = get_string("Player 1: ");

    string word2 = get_string("Player 2: ");

    // dar valor as letras

    int score1 = calc_score(word1);

    int score2 = calc_score(word2);

    // comparar os valores de score

    if (score1 > score2)
    {
        printf("Player 1 Wins!");
    }

    else if (score1 < score2)
    {
        printf("Player 2 Wins!");
    }

    else
    {
        printf("Tie!");
    }
}

int calc_score(string word)
{
    int score = 0;

    for (int i = 0; i < strlen(word); i++)
    {
        word[i] = tolower(word[i]);

        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'l' ||
            word[i] == 'n' || word[i] == 'o' || word[i] == 'r' || word[i] == 's' ||
            word[i] == 't' || word[i] == 'u')
        {
            score = score + 1;
        }

        else if (word[i] == 'd' || word[i] == 'g')
        {
            score = score + 2;
        }

        else if (word[i] == 'b' || word[i] == 'c' || word[i] == 'm' || word[i] == 'p')
        {
            score = score + 3;
        }

        else if (word[i] == 'f' || word[i] == 'h' || word[i] == 'y' || word[i] == 'v' ||
                 word[i] == 'w')
        {
            score = score + 4;
        }

        else if (word[i] == 'k')
        {
            score = score + 5;
        }

        else if (word[i] == 'j' || word[i] == 'x')
        {
            score = score + 8;
        }

        else if (word[i] == 'q' || word[i] == 'z')
        {
            score = score + 10;
        }

        else
        {
            score += 0;
        }
    }

    return score;
}
