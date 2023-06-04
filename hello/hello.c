#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string name = get_string("What's your name? ");  // To get name from user
    printf("Hello, World\n");  // Printing Hello World
    printf("Hello, %s \n", name);  // Printing Hello + username
}