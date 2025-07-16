#include <iostream>
#include <string>

bool check(const std::string &input) {
    if (input.length() != 7) return false;

    char expected[] = { 0x51, 0x4E, 0x01, 0x6B, 0x12, 0x0C, 0x7F };
    for (int i = 0; i < 7; i++) {
        if ((input[i] ^ 0x37) != expected[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string user_input;
    std::cout << "Enter the secret key: ";
    std::cin >> user_input;

    if (check(user_input)) {
        std::cout << "Access granted! Flag: FLAG{you_are_good}" << std::endl;
    } else {
        std::cout << "Access denied." << std::endl;
    }

    return 0;
}
