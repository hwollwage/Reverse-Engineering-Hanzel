#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    printf("Enter password: ");
    scanf("%19s", input);

    // XOR key
    const char key = 0x3A;

    // Encrypted password (what input must become after XOR)
    char encoded[] = { 0x5E, 0x57, 0x50, 0x51, 0x50, 0x43, 0x00 };

    int correct = 1;
    for (int i = 0; i < strlen((char*)encoded); i++) {
        if ((input[i] ^ key) != encoded[i]) {
            correct = 0;
            break;
        }
    }

    if (correct) {
        printf("Access granted! Flag: FLAG{xor_level_master}\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
