#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define PASSWORD_LENGTH 12  // Adjust this as needed

char generateRandomChar() {
    // Characters allowed in the password
    char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int charset_length = sizeof(charset) - 1;

    // Generate a random index within the charset
    int random_index = rand() % charset_length;

    // Return the randomly selected character
    return charset[random_index];
}

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate the password
    char password[PASSWORD_LENGTH + 1];  // +1 for the null terminator
    for (int i = 0; i < PASSWORD_LENGTH; i++) {
        password[i] = generateRandomChar();
    }
    password[PASSWORD_LENGTH] = '\0';

    // Output the generated password
    printf("%s\n", password);

    return 0;
}

