#include <iostream>
#include <algorithm>

int main() {
    int ans = 0;
    int a, b, c;
    while (scanf("%dx%dx%d", &a, &b, &c) == 3) {
        int sides[] = {a, b, c};
        std::sort(sides, sides + 3);

        int wrap = 2 * (sides[0] + sides[1]);
        int ribbon = a * b * c;
        ans += wrap + ribbon;
    }

    std::cout << ans << std::endl;
    return 0;
}

