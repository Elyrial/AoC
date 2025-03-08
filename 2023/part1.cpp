#include <iostream>

int main() {
    int ans = 0;
    std::string str;

    while (std::cin >> str) {
        char firstDigit = '\0', lastDigit = '\0';

        for (char ch : str) {
            if (isdigit(ch)) {
                if (firstDigit == '\0') {
                    firstDigit = ch;
                }
                lastDigit = ch;
            }
        }
        ans += stoi(std::string{firstDigit, lastDigit});
    }
    std::cout << ans << std::endl;
    return 0;
}
