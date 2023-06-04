#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number\n");
    scanf("%d", &num);
    int n = num, rev = 0;
    while (n > 0)
    {
        rev = rev * 10;
        rev = rev + n % 10;
        n = n / 10;
    }
    printf("%d", rev);
    printf("\n");
}