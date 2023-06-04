#include <stdio.h>
#include <math.h>

int main(void)
{
    int num, flag = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    int n = num, sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + pow(digit, 3);
        n = n / 10;
    }
    if (sum == num)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not a Armstrong number");
    }
    printf("\n");
}