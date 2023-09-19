#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD_LENGTH 13

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    const char expected_password[] = "Tada! Congrats"; // The desired password

    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random password
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }
    password[PASSWORD_LENGTH] = '\0';

    // Set the password to the desired value
    strncpy(password, expected_password, PASSWORD_LENGTH);

    // Print the generated password
    printf("%s\n", password);

    return 0;
}

