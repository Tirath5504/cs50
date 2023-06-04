#include <stdio.h>
#include <string.h>
int main(void)
{
    int n, flag = 0;
    scanf("%d", &n);
    int num[n][1000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i][0]);
        for (int j = 1; j <= num[i][0]; j++)
        {
            scanf("%d", &num[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        int max = num[i][1], min = num[i][1];
        for (int k = 1; k <= num[i][0]; k++)
        {
            for (int j = k; j <= num[i][0]; j++)
            {
                if (num[i][j] > max)
                {
                    max = num[i][j];
                }
                else if (num[i][j] < min)
                {
                    min = num[i][j];
                }
            }
        }
        printf("%d\n", max*min);
    }

    return 0;
}