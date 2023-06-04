#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        printf("Enter number of problems (between 1 and 1000): ");
        scanf("%d", &n);
    }
    while (n > 1000 || n < 0);
    int c2 = 0;
    int num[3];
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &num[0], &num[1], &num[2]);
        int c1 = 0;
        for (int j = 0; j < 3; j++)
        {
            if (num[j] == 1)
                c1++;
        }
        if (c1 >= 2)
            c2++;
    }
    printf("%d\n", c2);
}