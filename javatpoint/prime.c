#include <stdio.h>

int main(void)
{
    int n, flag = 0;
    printf("Enter a number\n");
    scanf("%d", &n);
    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            printf("Not a Prime Number");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Prime Number");
    }
    printf("\n");
}