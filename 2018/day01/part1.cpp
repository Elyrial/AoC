#include <iostream>

int main() {
    std::string freq;
    int ans = 0;
    
    while (std::cin >> freq) {
        int diff = std::stoi(freq);
        ans += diff;
    }

    std::cout << ans << std::endl;
    return 0;
}
