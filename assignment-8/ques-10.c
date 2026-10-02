/*Write a C program to input a sentence and separate it into individual words using strtok(). Display each word on a separate line and count the total number of words.*/

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char *word;
    int wordCount = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = 0; // Remove newline character

    // Use strtok() to separate the sentence into words
    word = strtok(sentence, " ");

    printf("The words in the sentence are:\n");
    while (word != NULL) {
        printf("%s\n", word);
        wordCount++;
        word = strtok(NULL, " "); // Get the next word
    }

    printf("Total number of words: %d\n", wordCount);

    return 0;
}