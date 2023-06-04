#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int n = num;
    int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        sum = sum * 10;
        n = n / 10;
    }
    sum = sum / 10;
    if (sum == num)
    {
        printf("Palindrome number");
    }
    else
    {
        printf("Not a palindrome number");
    }
    printf("\n");
}