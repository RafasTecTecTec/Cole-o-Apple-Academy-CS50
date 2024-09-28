#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string nome = get_string("Nome: ");

    printf("hello, %s\n", nome);
}