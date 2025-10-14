#include <stdio.h>
#include <string.h>

int main () {

    char pass[100];

    printf("Enter your password : ");
    gets(pass);

    int size = strlen(pass);

    if (size < 6 ) {
        printf("Password must be 6 Alphanumeric");
        return 0;
    }

    int alphaFlag = 0, digitFlag = 0, sepicalFlag = 0;

    for (int i = 0; pass[i] != '\0'; i++) {
        if ((pass[i] >= 'a' && pass[i] <= 'z') ||(pass[i] >= 'A' && pass[i] <= 'Z')) {
            alphaFlag = 1;
        }
        else if (pass[i] >= '0' && pass[i] <= '9') {
            digitFlag = 1;
        }
        else {
            sepicalFlag = 1;
        }
    }

    if (alphaFlag && digitFlag && sepicalFlag) {
            printf("Your password is strong ...!");
        }
        else {
            printf("Your password is weak ...!");
        }

    return 0;
}