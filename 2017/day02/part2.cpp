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
        bool found = false;

        for (int i = 0; i < row.size(); i++) {
            for (int j = 0; j < row.size(); j++) {
                if (i != j) {
                    if (row[i] % row[j] == 0) {
                        ans += row[i] / row[j];
                        found = true;
                        break;
                    }
                }
            }
            if (found) break;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

