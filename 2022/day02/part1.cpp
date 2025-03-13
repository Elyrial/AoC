#include <iostream>

int main() {
    int ans = 0;
    char a, b;

    while (std::cin >> a >> b) {
        if (a == 'A') { // Rock
            if (b == 'X') ans += 4; // 1 + 3
            if (b == 'Y') ans += 8; // 2 + 6
            if (b == 'Z') ans += 3; // 3 + 0
        } else if (a == 'B') { // Paper
            if (b == 'X') ans += 1; // 1 + 0
            if (b == 'Y') ans += 5; // 2 + 3
            if (b == 'Z') ans += 9; // 3 + 6
        } else { // Scissors
            if (b == 'X') ans += 7; // 1 + 6
            if (b == 'Y') ans += 2; // 2 + 0
            if (b == 'Z') ans += 6; // 3 + 3
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
