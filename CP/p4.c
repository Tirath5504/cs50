#include <stdio.h>

int main(void)
{
    int n1, n2, n, flag = 0;
    scanf("%d", &n);
    int num;
    for (int k = 0; k < n; k++)
    {
        scanf("%d", &num);
        int no[num];
        int a = 0;
        for (int i = 0; i < num; i++)
        {
            no[i] = i+1;
        }
            if (num % 2 == 1 && num >= 3)
            {
                no[0] = 3;
                no[1] = 1;
                no[2] = 2;
                for (int j = 3; j <= num; j += 2)
                {
                    int temp = no[j+1];
                    no[j+1] = no[j];
                    no[j] = temp;
                }
            }
            else if (num % 2 == 0)
            {
                for (int j = 0; j < num; j += 2)
                {
                    int temp = no[j+1];
                    no[j+1] = no[j];
                    no[j] = temp;
                }
            }

        for (int i = 0; i < num; i++)
        {
            printf("%d ", no[i]);
        }
        printf("\n");
        a++;
    }
    return 0;
}