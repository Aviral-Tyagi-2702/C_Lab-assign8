/*Write a C program to input two strings, display their lengths using strlen(), and compare them using strcmp(). Display whether the strings are equal or which string comes first lexicographically.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int len1, len2, result;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0; // Remove newline character

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0; // Remove newline character

    len1 = strlen(str1);
    len2 = strlen(str2);

    printf("Length of first string: %d\n", len1);
    printf("Length of second string: %d\n", len2);

    result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string comes first lexicographically.\n");
    } else {
        printf("The second string comes first lexicographically.\n");
    }

    return 0;
}