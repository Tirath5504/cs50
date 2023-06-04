#include <stdio.h>
#include <cs50.h>

bool prime(int number);

int main(void)
{
    int min;
    do
    {
        min = get_int("Minimum: ");
    }
    while (min < 1);

    int max;
    do
    {
        max = get_int("Maximum: ");
    }
    while (min >= max);

    for (int i = min; i <= max; i++)
    {
        if (prime(i))
        {
            printf("%i\n", i);
        }
    }
    return 0;
}

bool prime(int number)
{
    // Checking if number is prime or not

    // Initializing counter variable to zero

    int count = 0;

    for (int i = 1; i <= (number / 2); i++)
    {
        if (number % i == 0)
        {
            count++;
        }
    }

    // Checking if count is not equal to 1 since 1 is a factor of number

    if (count != 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
