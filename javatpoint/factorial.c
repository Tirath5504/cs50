#include <stdio.h>

int main(void)
{
    int n, flag = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d\n", fact);
}