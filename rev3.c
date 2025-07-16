#include <stdio.h>

int main() {
    int input;
    printf("Enter the magic number: ");
    scanf("%d", &input);

    if ((input * 4 + 2) == 170) {
        printf("Correct! The flag is: FLAG{math_is_power}\n");
    } else {
        printf("Nope. Try again.\n");
    }

    return 0;
}
