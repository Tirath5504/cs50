// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 100;

// Hash table
node *table[N];
int count[N];

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    char *copy = malloc(LENGTH + 1);
    for (int j = 0; j < N; j++)
    {
        table[j] = 0;
    }
    for (int j = 0; j < N; j++)
    {
        count[j] = 0;
    }
    int i = 0;
    FILE *file = fopen(dictionary, "r");
    if (file == NULL)
    {
        return false;
    }
    while (fscanf(file, "%s", copy) != EOF)
    {
        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            return false;
        }
        strcpy(n->word, copy);
        if (i == 0)
        {
            n->next = NULL;
        }
        int h = hash(n->word);
        n->next = table[h];
        table[h] = n;
        count[h]++;
        i++;
    }
    free(copy);
    fclose(file);
    return true;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    int sum = 0;
    for (int i = 0, n = strlen(word) + 1; i < n; i++)
    {
        char ch = toupper(word[i]);
        sum = sum + ch;
    }
    return (sum % 100);
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum = sum + count[i];
    }
    return sum;
}

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    int h = hash(word);
    for (node *cursor = table[h]; cursor != NULL; cursor = cursor->next)
    {
        if (strcasecmp(word, cursor->word) == 0)
        {
            return true;
        }
    }
    return false;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    for (int i = 0; i < N; i++)
    {
        while (table[i] != NULL)
        {
            node *temp = table[i]->next;
            free(table[i]);
            table[i] = temp;
        }
    }
    return true;
}
