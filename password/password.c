// Check that a password has at least one lowercase letter, uppercase letter, number and symbol
// Practice iterating through a string
// Practice using the ctype library

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool valid(string password);

int main(void)
{
    string password = get_string("Enter your password: ");
    if (valid(password))
    {
        printf("Your password is valid!\n");
    }
    else
    {
        printf("Your password needs at least one uppercase letter, lowercase letter, number and symbol\n");
    }
}

// Completing the Boolean function below
bool valid(string password)
{
    bool number, upper, lower, symbol;

    for (int i = 0, n = strlen(password); i < n; i++)
    {
        char ch = password[i];

        // Checking if password contains number

        if (isdigit(ch))
        {
            number = true;
        }

        // Checking if password contains uppercase alphabet

        if (isupper(ch))
        {
            upper = true;
        }

        // Checking if password contains lowercase alphabet

        if (islower(ch))
        {
            lower = true;
        }

        // Checking if password contains symbol

        if (ispunct(ch))
        {
            symbol = true;
        }
    }

    if (number && upper && lower && symbol)
    {
        return true;
    }
    else
    {
        return false;
    }
}