/*
#include <stdio.h>

#define MAX 10

int res[MAX][MAX];

void input(int mat[MAX][MAX], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("Enter element (%d, %d): ", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	printf("\n");
}

void multiply(int mat1[MAX][MAX], int mat2[MAX][MAX], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			for (int k = 0; k < columns; k++)
			{
				res[i][j] += mat1[i][k] * mat2[k][j];
			}
		}
	}
	printf("\n");
}

void print(int mat[MAX][MAX], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
}

int main(void)
{
	int n1a, n1b, n2a, n2b;
	int m1[MAX][MAX], m2[MAX][MAX];
	printf("Enter order of Matrix 1: ");
	scanf("%d %d", &n1a, &n1b);
	input(m1, n1a, n1b);
	printf("Enter order of Matrix 2: ");
	scanf("%d %d", &n2a, &n2b);
	input(m2, n2a, n2b);
	if (n1b == n2a)
	{
		multiply(m1, m2, n1a, n2b);
		print(res, n1a, n2b);
	}
	else
	{
		printf("Matrixes not compatible for multiplication");
	}
	printf("\n");
	return 0;
}
*/

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

# define MAX 100

int main(void)
{
	char str[MAX];
	int characters = 0, lines = 1, words = 1;
	printf("Enter a string ending with '.' : ");
	scanf("%[^.]s", &str);
	for (int i = 0, n = strlen(str); i < n; i++)
	{
		if (isalnum(str[i]))
			characters++;
		if (isspace(str[i]))
			words++;
		if (iscntrl(str[i]))
			lines++;
	}
	printf("Characters = %d\n", characters);
	printf("Words = %d\n", words);
	printf("Lines = %d\n", lines);
	return 0;
}
*/

/*
#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3-i;j++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for(i=3-1;i>=1;i--)     //for downward pyramid
	{
		for(j=1;j<=3-i;j++)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
*/

#include <stdio.h>

typedef struct
{
	char name[50];
	int roll_no, m1, m2, m3;
}student;

int main(void)
{
	int n;
	printf("Enter number of students: ");
	scanf("%d", &n);
	student s[n];
	for (int i = 0; i < n; i++)
	{
		printf("Enter student's name, roll number and marks in 3 subjects: ");
		scanf("%s", s[i].name);
		scanf("%d %d %d %d", &s[i].roll_no, &s[i].m1, &s[i].m2, &s[i].m3);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n-1; j++)
		{
			if ((s[j+1].m1 + s[j+1].m2 + s[j+1].m3) > (s[j].m1 + s[j].m2 + s[j].m3))
			{
				student temp = s[j];
				s[j] = s[j+1];
				s[j+1] = temp;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		printf("Student's name: %s\t", s[i].name);
		printf("Roll Number: %d\t", s[i].roll_no);
		printf("Marks in 3 subjects: %d %d %d", s[i].m1, s[i].m2, s[i].m3);
		printf("\n");
	}
	return 0;
}