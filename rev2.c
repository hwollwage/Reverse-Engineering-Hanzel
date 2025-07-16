#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    printf("Enter password: ");
    scanf("%19s", input);

    if (strcmp(input, "banana42") == 0) {
        printf("Correct! The flag is: FLAG{beginner_rev}\n");
    } else {
        printf("Wrong password.\n");
    }

    return 0;
}
