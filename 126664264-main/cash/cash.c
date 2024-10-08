#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

int get_cents(void)
{
    int cents;

    do
    {

        cents = get_int("Quanto devo?\n");
    }

    while (cents < 0);

    return cents;
}

int calculate_quarters(int cents)
{

    if (cents < 25)
    {

        return 0;
    }

    int quarters = 0;

    for (int i = 25; i <= cents; i += 25)
    {

        quarters = quarters + 1;
    }

    return quarters;
}

int calculate_dimes(int cents)
{

    if (cents < 10)
    {

        return 0;
    }

    int dimes = 0;

    for (int i = 10; i <= cents; i += 10)
    {

        dimes = dimes + 1;
    }

    return dimes;
}

int calculate_nickels(int cents)
{
    if (cents < 5)
    {

        return 0;
    }

    int nickels = 0;

    for (int i = 5; i <= cents; i += 5)
    {

        nickels = nickels + 1;
    }

    return nickels;
}

int calculate_pennies(int cents)
{

    int pennies = cents;

    return pennies;
}
