/*Write a C program to input a sentence and a word. Use strstr() to determine whether the word occurs in the sentence. If found, display the starting position of its first occurrence.

*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], word[50];
    char *ptr;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character

    printf("Enter a word to find: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = 0; // Remove newline character

    // Use strstr() to find the first occurrence of the word
    ptr = strstr(sentence, word);

    if (ptr != NULL) {
        // Calculate the position (1-based index)
        int position = ptr - sentence + 1;
        printf("The word '%s' is found at position: %d\n", word, position);
    } else {
        printf("The word '%s' is not found in the sentence.\n", word);
    }

    return 0;
}