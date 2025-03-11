#include <iostream>

int main() {
    int module;
    int ans = 0;

    while (std::cin >> module) {
        while (true) {
            int fuel = module / 3 - 2;
            if (fuel <= 0) break;
            ans += fuel;
            module = fuel;
        }
    }
    
    std::cout << ans << std::endl;
    return 0;
}

