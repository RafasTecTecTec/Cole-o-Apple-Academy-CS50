// Calculate your half of a restaurant bill
// Data types, operations, type casting, return value

#include <cs50.h>
#include <stdio.h>

float half(float bill, float tax, int tip);

int main(void)
{
    float bill_amount = get_float("Bill before tax and tip: ");
    float tax_percent = get_float("Sale Tax Percent: ");
    int tip_percent = get_int("Tip percent: ");

    printf("You will owe $%.2f each!\n", half(bill_amount, tax_percent, tip_percent));
}

// TODO: Complete the function
float half(float bill, float tax, int tip)
{
//typecast a tip para um float
// transformar tip e tax no valor percentual da cont
    float taxf = tax * bill / 100;

    float billf = bill + taxf;

    float tipf = (float)tip * billf / 100;

    float half = (billf + tipf) / 2;

//somar tudo e retornar metade

    return half;
}
