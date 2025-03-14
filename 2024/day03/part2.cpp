#include <iostream>
#include <regex>

int calculateSum(const std::string & memory) {
    std::regex mulPattern(R"(mul\((\d{1,3}),(\d{1,3})\))");
    std::regex doPattern(R"(do\(\))");
    std::regex dontPattern(R"(don't\(\))");

    std::smatch match;

    int total = 0;
    auto it = memory.cbegin();

    it = memory.cbegin();
    bool isMulEnabled = true;

    while (it != memory.cend()) {
        if (std::regex_search(it, memory.cend(), match, mulPattern) &&
            match.position() == 0) {
            if (isMulEnabled) {
                int x = std::stoi(match[1]);
                int y = std::stoi(match[2]);
                total += x * y;
            }
            it += match.length();
        } else if (std::regex_search(it, memory.cend(), match, doPattern) && match.position() == 0) {
            isMulEnabled = true;
            it += match.length();
        } else if (std::regex_search(it, memory.cend(), match, dontPattern) && match.position() == 0) {
            isMulEnabled = false;
            it += match.length();
        } else {
            ++it;
        }
    }
    return total;
}

int main() {
    int ans;
    std::string memory, line;
    while (std::getline(std::cin, line)) {
        memory += line;
    }
    ans = calculateSum(memory);

    std::cout << ans << std::endl;
    return 0;
}
