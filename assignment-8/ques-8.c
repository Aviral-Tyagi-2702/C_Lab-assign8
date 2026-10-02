/*Write a C program to input a string and a character. Use strchr() to find the first occurrence of the character. If found, display its position; otherwise, display an appropriate message.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    char *ptr;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline character

    printf("Enter a character to find: ");
    scanf("%c", &ch);

    // Use strchr() to find the first occurrence of the character
    ptr = strchr(str, ch);

    if (ptr != NULL) {
        // Calculate the position (1-based index)
        int position = ptr - str + 1;
        printf("The character '%c' is found at position: %d\n", ch, position);
    } else {
        printf("The character '%c' is not found in the string.\n", ch);
    }

    return 0;
}