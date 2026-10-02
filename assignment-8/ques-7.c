/*Write a C program to input a first name and a last name. Use strcpy() and strcat() to create and display the complete name with a space between the two names.*/

#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50], lastName[50], fullName[100];

    printf("Enter your first name: ");
    fgets(firstName, sizeof(firstName), stdin);
    firstName[strcspn(firstName, "\n")] = 0; // Remove newline character

    printf("Enter your last name: ");
    fgets(lastName, sizeof(lastName), stdin);
    lastName[strcspn(lastName, "\n")] = 0; // Remove newline character

    // Copy first name to full name
    strcpy(fullName, firstName);
    // Concatenate a space and then the last name
    strcat(fullName, " ");
    strcat(fullName, lastName);

    printf("Complete name: %s\n", fullName);

    return 0;
}