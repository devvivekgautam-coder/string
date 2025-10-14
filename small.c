#include <stdio.h>

int main () {
    char str[100];

    printf("Enter your message : ");
    gets(str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        }
        else {
            printf("%c", str[i]);
        }
    }
    return 0;
}