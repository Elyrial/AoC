#include <iostream>

int main() {
    int ans = 0;
    char a, b;

    // X = LOOSE
    // Y = DRAW
    // Z = WIN
    while (std::cin >> a >> b) {
        if (a == 'A') { // Rock
            if (b == 'X') ans += 3;
            if (b == 'Y') ans += 4;
            if (b == 'Z') ans += 8;
        } else if (a == 'B') { // Paper
            if (b == 'X') ans += 1;
            if (b == 'Y') ans += 5;
            if (b == 'Z') ans += 9;
        } else { // Scissors
            if (b == 'X') ans += 2;
            if (b == 'Y') ans += 6;
            if (b == 'Z') ans += 7;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}

