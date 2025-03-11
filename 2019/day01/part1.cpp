#include <iostream>
#include <cmath>

int main() {
    int module;
    int ans = 0;

    while (std::cin >> module) {
        ans += floor(module / 3) - 2;
    }
    
    std::cout << ans << std::endl;
    return 0;
}
