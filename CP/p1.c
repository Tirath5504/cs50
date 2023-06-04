#include <stdio.h>

int main(void)
{
    int n1, n2, n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (num[i] % 3 == 0)
        {
            printf("%d %d\n", (num[i] / 3), (num[i] / 3));
        }
        else if (num[i] % 3 == 1)
        {
            printf("%d %d\n", ((num[i] / 3) + 1), (num[i] / 3));
        }
        else
        {
            printf("%d %d\n", (num[i] / 3), ((num[i] / 3) + 1));
        }
    }
    return 0;
}