#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

// Declaring Functions
string input(void);
int letters(string s, int n);
int words(string s, int n);
int sentences(string s, int n);
float index(float n_l, float n_w, float n_s);
void output(float n);

// Main Function
int main(void)
{
    string s = input();
    int n = strlen(s);
    int n_l = letters(s, n);
    int n_w = words(s, n);
    int n_s = sentences(s, n);
    float i = index(n_l, n_w, n_s);
    printf("%i letters\n", n_l);
    printf("%i words\n", n_w);
    printf("%i sentences\n", n_s);
    output(i);
}

// Taking input
string input(void)
{
    return get_string("Enter your text: \n");
}

// Counting letters
int letters(string s, int n)
{
    int n1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (isalpha(s[i]))
        {
            n1++;
        }
    }
    return n1;
}

// Counting words
int words(string s, int n)
{
    int n1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            n1++;
        }
    }
    return n1;
}

// Counting sentences
int sentences(string s, int n)
{
    int n1 = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.' || s[i] == '?' || s[i] == '!')
        {
            n1++;
        }
    }
    return n1;
}

// Computing index
float index(float n_l, float n_w, float n_s)
{
    float l = (n_l / n_w) * 100.0;
    float s = (n_s / n_w) * 100.0;
    float i = (0.0588 * l) - (0.296 * s) - (15.8);
    return i;
}

// Printing output
void output(float n)
{
    int i = round(n);
    if (i >= 1 && i <= 16)
    {
        printf("Grade %i\n", i);
    }
    else if (i > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}