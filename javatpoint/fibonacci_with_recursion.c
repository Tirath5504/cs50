#include <stdio.h>

void fibo(int n);

int main(void)
{
    int a = 0, b = 1;
    int n;
    printf("Enter a number\n");
    scanf("%d", &n);
    printf("%d, %d, ", a, b);
    fibo(n - 2);
    printf("\n");
}

void fibo(int n)
{
    static int n1 = 0, n2 = 1, sum;
    if (n > 0)
    {
        sum = n1 + n2;
        n1 = n2;
        n2 = sum;
        printf("%d ,", sum);
        fibo(n-1);
    }
}