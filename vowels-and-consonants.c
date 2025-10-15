#include <stdio.h>
#include <string.h>

int main () {

    char str[100];
    int vowels = 0, consonants = 0;

    printf("Enter a word : ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++){
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }
        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' ||ch == 'o' || ch == 'u') {
                vowels++;
            }
            else {
                consonants++;
            }
        }
    }

    printf("Vowels: %d\n", vowels);

    printf("Consonants: %d", consonants);

    return 0;
}