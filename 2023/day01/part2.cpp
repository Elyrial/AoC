#include <iostream>
#include <unordered_map>

int main() {
    int ans = 0;
    std::string str;

    std::unordered_map<std::string, char> wordToDigit = {
        {"one", '1'}, {"two", '2'}, {"three", '3'}, {"four", '4'}, {"five", '5'},
        {"six", '6'}, {"seven", '7'}, {"eight", '8'}, {"nine", '9'}
    };

    while (std::cin >> str) {
        char firstChar = '\0', lastChar = '\0';

        for (int i = 0; i < str.length(); i++) {
            if (isdigit(str[i])) {
                if (firstChar == '\0') {
                    firstChar = str[i];
                }
                lastChar = str[i];
            } else {
                for (const auto& [word, digit] : wordToDigit) {
                    if (str.substr(i, word.length()) == word) { 
                        if (firstChar == '\0') {
                            firstChar = digit;
                        }
                        lastChar = digit;
                    }
                }
            }
        }

        ans += std::stoi(std::string{firstChar, lastChar});
    }

    std::cout << ans << std::endl;
    return 0;
}
