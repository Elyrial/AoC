#include <iostream>

int main() {
    int ans;
    int horizontal = 0, depth = 0,  aim = 0;

    std::string dir;
    int units;

    while (std::cin >> dir >> units) {
        if (dir == "down") aim += units;
        if (dir == "up") aim -= units;
        if (dir == "forward") {
            horizontal += units;
            depth += units * aim;
        }
    }

    ans = horizontal * depth;

    std::cout << ans << std::endl;
    return 0;
}

