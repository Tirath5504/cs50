#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    char *str = malloc(50 * sizeof(char));
    string answer = malloc(50 * sizeof(char));
    for(int i = 0; i < n; i++)
    {
        scanf("%s", str);
        int len = strlen(str);
        char *length = malloc(50 * sizeof(char));
        sprintf(length, "%d", len);
        char comma = ',';
        if (len > 10)
        {
            char *ans = malloc(50 * sizeof(char));
            char first = str[0];
            strncat(ans, &first, 1);
            strcat(ans, length);
            strcat(ans, &str[len - 1]);
            strcat(answer, ans);
            strncat(answer, &comma, 1);
            ans = "";
        }
        else
        {
            strcat(answer, str);
            strncat(answer, &comma, 1);
        }
        free(length);
    }
    for(int i = 0; i < strlen(answer); i++)
    {
        if (answer[i] == ',')
        {
            printf("\n");
        }
        else
            printf("%c", answer[i]);
    }
    free(answer);
    free(str);
}