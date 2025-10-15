#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0;
    int i;

    printf("Enter a word: ");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];

        if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;

        if ((ch >= 'a' && ch <= 'z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
