#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - Split a string into words.
 *
 * @str: The string to be split.
 *
 * Returns: An array of strings, each containing a single word. The last
 * element of the array is NULL.
 */
char **strtow(char *str)
{
  /* Check if the input string is null or empty. */
  if (str == NULL || *str == '\0') {
    return NULL;
  }

  /* Count the number of words in the string. */
  int word_count = 1;
  for (char *p = str; *p != '\0'; p++) {
    if (*p == ' ') {
      word_count++;
    }
  }

  /* Allocate memory for the array of strings. */
  char **words = malloc(sizeof(char *) * (word_count + 1));
  if (words == NULL) {
    return NULL;
  }

  /* Set the last element of the array to NULL. */
  words[word_count] = NULL;

  /* Split the string into words and store them in the array. */
  int word_index = 0;
  char *start = str;
  for (char *p = str; *p != '\0'; p++) {
    if (*p == ' ') {
      /* Create a new string from the start of the word to the current
       * position. */
      char *word = malloc(sizeof(char) * (p - start + 1));
      if (word == NULL) {
        /* Free the memory allocated for the array of strings. */
        for (int i = 0; i < word_index; i++) {
          free(words[i]);
        }
        free(words);
        return NULL;
      }

      /* Copy the word to the new string. */
      strncpy(word, start, p - start);
      word[p - start] = '\0';

      /* Add the new string to the array of strings. */
      words[word_index] = word;

      /* Increment the word index. */
      word_index++;

      /* Set the start of the next word to the next character. */
      start = p + 1;
    }
  }

  /* Copy the last word to the array of strings. */
  char *last_word = malloc(sizeof(char) * (str + strlen(str) - start + 1));
  if (last_word == NULL) {
    /* Free the memory allocated for the array of strings. */
    for (int i = 0; i < word_index; i++) {
      free(words[i]);
    }
    free(words);
    return NULL;
  }

  strncpy(last_word, start, str + strlen(str) - start);
  last_word[str + strlen(str) - start] = '\0';

  words[word_index] = last_word;

  return words;
}

/*
 * main - Test the strtow function.
 *
 * Returns: 0 on success, 1 on failure.
 */
int main() {
  char *str = "This is a test string.";

  char **words = strtow(str);

  if (words == NULL) {
    printf("Error splitting string into words.\n");
    return 1;
  }

  /* Print the words. */
  for (int i = 0; words[i] != NULL; i++) {
    printf("%s\n", words[i]);
  }

  /* Free the memory allocated for the array of strings. */
  for (int i = 0; words[i] != NULL; i++) {
    free(words[i]);
  }
  free(words);

  return 0;
}
