#include <iostream>
#include <vector>

bool isMatch(const std::vector<std::string> &grid, const std::string &word, int startRow, int startCol, int dRow, int dCol) {
    int rows = grid.size();
    int cols = grid[0].size();
    int wordLen = word.size();

    for (int i = 0; i < wordLen; i++) {
        int newRow = startRow + i * dRow;
        int newCol = startCol + i * dCol;
        if (newRow < 0 || newRow >= rows || newCol < 0 || newCol >= cols ||
            grid[newRow][newCol] != word[i]) {
            return false;
        }
    }
    return true;
}


int countSubstr(const std::vector<std::string> &grid, const std::string &word) {
    int rows = grid.size();
    int cols = grid[0].size();
    int count = 0;

    std::vector<std::pair<int, int>> directions = {
        {0, 1},    // right
        {0, -1},   // left
        {1, 0},    // down
        {-1, 0},   // up
        {1, 1},    // down-right
        {-1, -1},  // up-left
        {1, -1},   // down-left
        {-1, 1}    // up-right
    };

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            for (const auto &[dRow, dCol] : directions) {
                if (isMatch(grid, word, i, j, dRow, dCol)) {
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

    int ans = countSubstr(grid, subStr);

    std::cout << ans << std::endl;
    return 0;
}
