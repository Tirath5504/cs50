#include <stdio.h>
#include <string.h>
int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    int num[n];
    char str[100];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
        scanf("%s", &str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        flag = 0;
        for (int k = 0; k < num[i]; k++)
        {
        if (str[k+1] != str[k])
        {
            for (int j = k+2; j < num[i]; j++)
            {
                if (str[k] == str[j])
                {
                    printf("NO\n");
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                break;
            }
        }
        }
        if (!flag)
        {
            printf("YES\n");
        }
    }
    return 0;
}