#include <iostream>
#include <algorithm>

int main() {
    int ans = 0;
    int a, b, c;
    while (scanf("%dx%dx%d", &a, &b, &c) == 3) {
        int slack = std::min({a * b, a * c, b * c});
        ans += 2 * a * b + 2 * a * c + 2 * b * c + slack;
    }

    std::cout << ans << std::endl;
    return 0;
}
