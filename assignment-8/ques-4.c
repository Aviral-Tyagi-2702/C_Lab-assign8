/*Write a C program to determine whether a given string is a palindrome. Ignore differences between uppercase and lowercase letters. For example, Madam should be treated as a palindrome.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int length, i, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    str[strcspn(str, "\n")] = 0;

    length = strlen(str);

    for (i = 0; i < length / 2; i++) {
        // Compare characters ignoring case
        if (tolower(str[i]) != tolower(str[length - i - 1])) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}

