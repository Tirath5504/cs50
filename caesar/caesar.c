#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Declaring Functions
string input(void);
string cipher(string s, int k);
void output(string s);
int valid(int l, string key);

// Main Function
int main(int l, string key[])
{
    if (l != 1)
    {
        string a = key[1];
        int k = atoi(a);
        int r = valid(l, a);
        if (r == 1)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
        string  s = input();
        s = cipher(s, k);
        output(s);
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    return 0;
}

// Checking if key is valid
int valid(int l, string key)
{
    int c = 0;
    int n = strlen(key);
    if (l == 2)
    {
        for (int i = 0; i < n; i++)
        {
            if (isdigit(key[i]))
            {
                c = 0;
            }
            else
            {
                c = 1;
            }
        }
    }
    else
    {
        c = 1;
    }
    return c;
}

// Taking Plain Text
string input(void)
{
    string s = get_string("PlainText:  ");
    return s;
}

// Converting to Cipher Text
string cipher(string s, int k)
{
    int n = strlen(s);
    for (int i = 0; i < n; i++)
    {
        if (isupper(s[i]))
        {
            s[i] = 65 + (s[i] - 65 + k) % 26;
        }
        else if (islower(s[i]))
        {
            s[i] = 97 + (s[i] - 97 + k) % 26;
        }
    }
    return s;
}

// Printing Output
void output(string s)
{
    printf("Ciphertext: %s\n", s);
}