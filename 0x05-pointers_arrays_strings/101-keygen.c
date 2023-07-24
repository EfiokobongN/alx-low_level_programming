#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to generate a random character from the given character set
char getRandomCharacter(const char *charSet) {
    return charSet[rand() % strlen(charSet)];
}

// Function to generate a random password of given length
void generateRandomPassword(char *password, int length, const char *charSet) {
    for (int i = 0; i < length; i++) {
        password[i] = getRandomCharacter(charSet);
    }
    password[length] = '\0';
}

int main() {
    // Define the character set for the password (modify as needed)
    const char *charSet = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";

    // Define the length of the password
    int passwordLength = 10;

    // Seed the random number generator
    srand(time(NULL));

    // Allocate memory for the password
    char *password = (char *)malloc((passwordLength + 1) * sizeof(char));

    // Generate the random password
    generateRandomPassword(password, passwordLength, charSet);

    // Print the generated password
    printf("Generated Password: %s\n", password);

    // Free the allocated memory
    free(password);

    return 0;
}

