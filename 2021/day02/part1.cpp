#include <iostream>

int main() {
    int ans;
    int horizontal = 0, depth = 0;

    std::string dir;
    int units;

    while (std::cin >> dir >> units) {
        if (dir == "forward") horizontal += units;
        if (dir == "down") depth += units;
        if (dir == "up") depth -= units;
    }
    ans = horizontal * depth;

    std::cout << ans << std::endl;
    return 0;
}
