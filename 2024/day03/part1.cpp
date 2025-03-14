#include <iostream>
#include <regex>

int calculateSum(const std::string &memory) {
    std::regex mulPattern(R"(mul\((\d{1,3}),(\d{1,3})\))");
    std::regex doPattern(R"(do\(\))");
    std::regex dontPattern(R"(don't\(\))");

    std::smatch match;
    std::vector < int > result;

    int total = 0;
    auto it = memory.cbegin();

    while (std::regex_search(it, memory.cend(), match, mulPattern)) {
        int x = std::stoi(match[1].str());
        int y = std::stoi(match[2].str());
        total += x * y;
        it = match.suffix().first;
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
