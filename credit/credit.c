#include <cs50.h>
#include <stdio.h>

// Declaring functions
long get_number(void);
int get_type(long n);
bool valid_number(long n);
int display(int n1, bool luhn);

// Main Function
int main(void)
{
    // Asking user their credit card number
    long n = get_number();

    // Checking what type of card they use
    int company = get_type(n);

    // Checking if number is valid
    bool valid = valid_number(n);

    // Printing result
    int a = display(company , valid);
}

// Taking credit card number from user.
long get_number(void)
{
    long n = get_long("Enter your credit number ");
    return n;
}

// Checking which company's credit card it is
int get_type(long n)
{
    // Checking if it is an American Express card
    if (n / 10000000000000 == 34 || n / 10000000000000 == 37)
    {
        return 1;
    }

    // Checking if it is a Visa card (Part 1)
    else if (n / 100000000000000 == 51 || n / 100000000000000 == 52 || n / 100000000000000 == 53)
    {
        return 2;
    }

    // Checking if it is a Visa card (Part 2)
    else if (n / 100000000000000 == 54 || n / 100000000000000 == 55)
    {
        return 2;
    }

    // Checking if it is a MasterCard
    else if (n / 1000000000000000 == 4 || n / 1000000000000 == 4)
    {
        return 3;
    }

    // Checking if it is an invalid card
    else
    {
        return 4;
    }
}

// Finding if the number is valid
bool valid_number(long n)
{
    long n1;
    long sum1 = 0, sum2 = 0, sum3 = 0;
    long n2 = n / 10;
    while (n > 0)
    {
        n1 = n2 % 10;
        n1 = n1 * 2;
        sum1 = 0;
        while (n1 > 0)
        {
            sum1 = sum1 + (n1 % 10);
            n1 = n1 / 10;
        }
        sum2 = sum2 + sum1;
        sum3 = sum3 + (n % 10);
        n = n / 100;
        n2 = n2 / 100;
    }
    if (((sum2 + sum3) % 10) == 0)
    {
        return true;
    }
    {
        return false;
    }
}

// Printing result
int display(int n1, bool luhn)
{
    if (n1 == 1 && luhn)
    {
        printf("AMEX\n");
    }
    else if (n1 == 2 && luhn)
    {
        printf("MASTERCARD\n");
    }
    else if (n1 == 3 && luhn)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
    return 0;
}
