#include <stdio.h>
#include <string.h>

int main () {

    char str[100], rev[100];

    printf("Enter any word :");
    scanf("%s", str);

    strcpy(rev ,str);
    strrev(rev);

    if (strcmp(rev, str) == 0) {
        printf("This word is a Palindrome : %s", str);
    }
    else {
        printf("This word is not a Palindrome : %s", str);
    }

    return 0;
}