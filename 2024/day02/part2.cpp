#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

bool isSafeReport(const std::vector<int> &levels) {

    bool isIncreasing = levels[1] > levels[0];
    bool isDecreasing = levels[1] < levels[0];

    for (int i = 1; i < levels.size(); ++i) {
        int diff = levels[i] - levels[i - 1];

        if (std::abs(diff) == 0 || std::abs(diff) > 3) {
            return false;
        }

        if (diff > 0 && !isIncreasing) {
            return false;
        }

        if (diff < 0 && !isDecreasing) {
            return false;
        }
    }
    return true;
}

bool passWithDampener(const std::vector<int> &levels) {
    for (int i = 0; i < levels.size(); i++) {
        std::vector temp = levels;
        temp.erase(temp.begin() + i);
        if (isSafeReport(temp)) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector <std::string> V;
    std::string input;

    while (std::getline(std::cin, input)) {
        if (input.empty()) {
            break;
        }
        V.push_back(input);
    }

    int pass = 0;

    for (const std::string &line : V) {
        std::istringstream stream(line);
        std::vector<int> levels;
        int num;

        while (stream >> num) {
            levels.push_back(num);
        }

        if (isSafeReport(levels) || passWithDampener(levels)) {
            pass++;
        }
    }

    std::cout << pass << std::endl;;

    return 0;
}
