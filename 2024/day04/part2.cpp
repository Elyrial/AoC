#include <iostream>
#include <vector>

int countXMAS(const std::vector<std::string> &grid) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    for (int i = 1; i < rows - 1; ++i) {
        for (int j = 1; j < cols - 1; ++j) {
            if (grid[i][j] == 'A') {
                if ((i > 0 && i < rows - 1 && j > 0 && j < cols - 1) &&
                    ((grid[i - 1][j - 1] == 'M' && grid[i + 1][j + 1] == 'S') ||
                     (grid[i - 1][j - 1] == 'S' &&
                      grid[i + 1][j + 1] == 'M')) &&
                    ((grid[i + 1][j - 1] == 'M' && grid[i - 1][j + 1] == 'S') ||
                     (grid[i + 1][j - 1] == 'S' &&
                      grid[i - 1][j + 1] == 'M'))) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    std::string subStr = "XMAS";
    std::string input;
    std::vector<std::string> grid;

    while (std::cin >> input) {
        grid.push_back(input);
    }

    int ans = countXMAS(grid);

    std::cout << ans << std::endl;
    return 0;
}
