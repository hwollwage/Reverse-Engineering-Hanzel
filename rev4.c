#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    printf("Enter the passphrase: ");
    scanf("%19s", input);

    if (strstr(input, "re") && input[0] == 'x' && input[4] == '9') {
        printf("Correct! The flag is: FLAG{string_logic_master}\n");
    } else {
        printf("Access denied.\n");
    }

    return 0;
}
