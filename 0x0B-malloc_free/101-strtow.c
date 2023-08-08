#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * strtow - splits a string into an array of strings.
 * @str: String to be split.
 *
 * Return: a pointer to an array of strings.
 */
char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);

    int word_count = 0;
    char **words = NULL;
    char *token = strtok(str, " ");

    while (token)
    {
        words = realloc(words, (word_count + 1) * sizeof(char *));
        if (words == NULL)
        {
            /* Handle memory allocation error*/
            perror("Memory allocation error");
            exit(EXIT_FAILURE);
        }

        words[word_count] = strdup(token);
        if (words[word_count] == NULL)
        {
            /* Handle memory allocation error*/
            perror("Memory allocation error");
            exit(EXIT_FAILURE);
        }

        word_count++;
        token = strtok(NULL, " ");
    }

    words = realloc(words, (word_count + 1) * sizeof(char *));
    if (words == NULL)
    {
        /*Handle memory allocation error*/
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }
    words[word_count] = NULL; /* NULL-terminate the array*/

    return words;
}

int main()
{
    char input[] = "Talk is cheap. Show me the code.";
    char **result = strtow(input);

    if (result)
    {
        for (int i = 0; result[i] != NULL; i++)
        {
            printf("%s\n", result[i]);
            free(result[i]);
        }
        free(result);
    }

    return 0;
}

