#include <iostream>

int main() {
    int ans = 0;
    std::string str;
    std::cin >> str;

    for (int i = 0; i < str.length() / 2; i++) {
        if (str[i] == str[str.length() / 2 + i]) {
            ans += 2 * (str[i] - '0');
        }
    }
    
    std::cout << ans << std::endl;
    return 0;
}

