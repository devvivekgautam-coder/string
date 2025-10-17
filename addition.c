#include <stdio.h>

int main() {
    char num1[100], num2[100];
    int n1 = 0, n2 = 0, sum;

    printf("Enter first number: ");
    scanf("%s", num1);

    printf("Enter second number: ");
    scanf("%s", num2);

    for (int i = 0; num1[i] != '\0'; i++) {
        n1 = n1 * 10 + (num1[i] - '0');
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        n2 = n2 * 10 + (num2[i] - '0');
    }

    sum = n1 + n2;

    printf("Sum : %d", sum);

    return 0;
}
