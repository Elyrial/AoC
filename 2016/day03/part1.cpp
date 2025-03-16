#include <iostream>

int main() {
    int ans = 0;

    int a, b, c;

    while (std::cin >> a >> b >> c) {
        if (a + b > c && a + c > b && b + c > a) ans++;
    }

    std::cout << ans << std::endl;
    return 0;
}

