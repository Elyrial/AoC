#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

int main() {
    int ans = 0;
    std::string line;
    std::vector<std::vector<int>> matrix;

    while (std::getline(std::cin, line)) {
        if(line.empty()) break;
        std::stringstream ss(line);
        std::vector<int> row;
        int num;

        while (ss >> num) {
            row.push_back(num);
        }
        
        matrix.push_back(row);
    }

    for (const std::vector<int> &row : matrix) {
        int max = *max_element(row.begin(), row.end());
        int min = *min_element(row.begin(), row.end());
        ans += max - min;
    }

    std::cout << ans << std::endl;
    return 0;
}
