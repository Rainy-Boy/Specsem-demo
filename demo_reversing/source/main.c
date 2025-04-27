#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[]) {
    char user_input[30];
    char password[30] = "D3m0_P455w0rd";

    printf("Enter the password:\n");
    scanf("%s", user_input);

    if (strcmp(password, user_input) == 0) {
        printf("You got the correct password! Let me tell you a secret...\n");
    } else {
        printf("Nope!");
    }

    return 0;
}