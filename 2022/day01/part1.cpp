#include <iostream>
#include <algorithm>

int main() {
    int ans = 0;
    int sum = 0;
    std::string line;

    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            ans = std::max(sum, ans);
            sum = 0;
        } else {
            sum += std::stoi(line);
        }
    }

    ans = std::max(sum, ans);

    std::cout << ans << std::endl;
    return 0;
}



