#include <iostream>

int main() {
    int ans = 0;
    std::string str;
    std::cin >> str;

    for (int i = 0; i < str.length() - 1; i++) {
        if (str[i] == str[i + 1]) {
            ans += str[i] - '0';
        }
    }

    if (str[0] == str[str.length() - 1]) {
        ans += str[0] - '0';
    }
    
    std::cout << ans << std::endl;
    return 0;
}
