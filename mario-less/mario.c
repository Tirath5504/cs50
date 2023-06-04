#include <cs50.h>
#include <stdio.h>

// Declaring functions
int input(void);
void print_pattern(int n);

// Main Function
int main(void)
{
    int n = input();
    print_pattern(n);
}

// Taking Input
int input(void)
{
    int width;
    do
    {
        width = get_int("Width: ");
    }
    while (width <= 0 || width > 8);
    return width;
}

// Printing Pattern
void print_pattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < (n - 1); j++)
        {
            printf(" ");
        }
        for (int j = n; j >= (n - i); j--)
        {
            printf("#");

        }
        printf("\n");
    }
}