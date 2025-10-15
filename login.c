#include <stdio.h>
#include <string.h>

int main () {

    char useryou123[] = "user.memory", password[] = "Admin@1234"; 

    char user[100];
    char pass[100];

    printf("Enter your user I'D : ");
    scanf("%s", user);
   
    printf("Enter your password : ");
    scanf("%s", pass);


    if (strcmp(useryou123, user) == 0 && strcmp(password, pass) == 0) {
        printf("Login Sucessfull ...!\n");
    }
    else {
        printf("Wrong user ID or Password !!!");
    }

    return 0;
}