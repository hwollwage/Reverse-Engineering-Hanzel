#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    printf("Enter access key: ");
    scanf("%19s", input);

    if (strlen(input) == 8 && input[2] == '3' && strstr(input, "win") && input[7] == 'z') {
        printf("Access granted! Flag: FLAG{indexed_victory}\n");
    } else {
        printf("Wrong key. Try again.\n");
    }

    return 0;
}
