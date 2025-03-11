#include <iostream>

int main() {
    std::string instructions;
    std::cin >> instructions;

    int ans = 0;
    for (char ch : instructions) {
        if (ch == '(') {
            ans++;
        } else if (ch == ')') {
            ans--;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
