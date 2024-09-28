#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string nome = get_string("Qual o seu nome?\n");

    printf("Olá, %s!\n", nome);
}
