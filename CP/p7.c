#include <stdio.h>

int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int num, mid;
        int count = 0;
        scanf("%d", &num);
        char str[num];
        scanf("%s", str);
        if (num%2 == 0)
        {
            mid = num/2;
        }
        else
        {
            mid = (num+1)/2;
        }
        for(int j = 0, k = num-1; j < mid; j++, k--)
        {
            if ((str[j] == '1' && str[k] == '0') || (str[j] == '0' && str[k] == '1'))
            {
                continue;
            }
            else
            {
                count = k - j + 1;
                break;
            }
        }
        printf("%d\n", count);
    }
    return 0;
}