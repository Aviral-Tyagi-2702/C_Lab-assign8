#include <stdio.h>

int main()
{
    char str1[200], str2[100];
    int i = 0, j = 0;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    while (str1[i] != '\0' && str1[i] != '\n')
    {
        i++;
    }

    str1[i] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    while (str2[j] != '\0' && str2[j] != '\n')
    {
        j++;
    }

    str2[j] = '\0';

    j = 0;

    while (str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';

    printf("Concatenated string: %s", str1);

    return 0;
}