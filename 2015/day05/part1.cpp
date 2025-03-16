#include <iostream>
#include <vector>

int main() {
    int ans = 0;
    std::string str;

    std::string vowels = "aeiou";
    std::vector<std::string> forbiddenStrings = {"ab", "cd", "pq", "xy"};

    while (std::cin >> str) {
        int numOfVowels = 0;
        bool doubleLetters = false;
        bool hasForbidden = false;

        // Check forbidden strings
        for (const std::string& forbidden : forbiddenStrings) {
            if (str.find(forbidden) != std::string::npos) {
                hasForbidden = true;
                break;
            }
        }
        if (hasForbidden) continue;

        // Check vowels and double letters
        for (size_t i = 0; i < str.length(); i++) {
            if (vowels.find(str[i]) != std::string::npos) numOfVowels++;
            if (i > 0 && str[i] == str[i - 1]) doubleLetters = true;
        }

        if (doubleLetters && numOfVowels >= 3) ans++;
    }

    std::cout << ans << std::endl;
    return 0;
}
