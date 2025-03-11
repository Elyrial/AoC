#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

int main() {
    int sum = 0;
    std::string line;
    std::vector<int> V;

    while (std::getline(std::cin, line)) {
        if (line.empty()) {
            V.push_back(sum);
            sum = 0;
        } else {
            sum += std::stoi(line);
        }
    }

    std::sort(V.begin(), V.end(), std::greater<>());

    int ans = std::accumulate(V.begin(), V.begin() + 3, 0);

    std::cout << ans << std::endl;
    return 0;
}




