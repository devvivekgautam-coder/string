#include <stdio.h>

int main()
{
    char str[100];

    int i, j, flag = 0;

    printf("Enter any string: ");
    gets(str);

    for (j = 0; str[j] != '\0'; j++)

        j = j - 1;
        
    for (i = 0; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("The given string is a Palindrome.");
    }
    else
    {
        printf("The given string is not a Palindrome.");
    }

    return 0;
}