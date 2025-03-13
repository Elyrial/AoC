#include <iostream>

int main() {
    int ans = 0;
    int a, b;

    while (scanf("%d-%d ", &a, &b) == 2) {
        char letter;
        std::string password;
        scanf("%c: ", &letter);
        
        std::cin >> password;

        if (password[a - 1] == letter && password[b - 1] != letter ||
                password[b - 1] == letter && password[a - 1] != letter) {
            ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

