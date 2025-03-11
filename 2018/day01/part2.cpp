#include <iostream>
#include <set>
#include <vector>

int main() {
    std::string freq;
    int ans = 0;
    std::set<int> visited;
    std::vector<std::string> frequencies;

    visited.insert(0);

    while (std::cin >> freq) {
        frequencies.push_back(freq);
    }

    while (true) {
        for (std::string& str : frequencies) {
            if (str[0] == '+') {
                ans += std::stoi(str.substr(1));
            } else if (str[0] == '-') {
                ans -= std::stoi(str.substr(1));
            }
            
            if (visited.find(ans) != visited.end()) {
                std::cout << "First repeated frequency: " << ans << std::endl;
                return 0;
            }
            visited.insert(ans);
        }
    }
}

