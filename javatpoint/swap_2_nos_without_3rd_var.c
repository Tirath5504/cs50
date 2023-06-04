#include<stdio.h>

int main(void)
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Swapped Numbers are %d and %d", a, b);
}