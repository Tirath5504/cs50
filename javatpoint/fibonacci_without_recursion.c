#include <stdio.h>

int main(void)
{
    int a = 0, b = 1;
    int c, n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("%d, %d, ", a, b);
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d, ", c);
    }
    printf("\n");
}