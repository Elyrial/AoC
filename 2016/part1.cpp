#include <iostream>
#include <vector>
#include <utility>
#include <set>

struct Player {
    int x = 0;
    int y = 0;
};

int main() {
    int dir = 0;
    Player player;
    std::vector<std::pair<int, int>> directions = {
        {1, 0},
        {0, -1},
        {-1, 0},
        {0, 1}
    };

    std::string input;
    std::vector<std::string> instructions;

    while (std::cin >> input) {
        instructions.push_back(input);
    }

    for (std::string str : instructions) {
        if (str[0] == 'R') {
            dir++;
        } else {
            dir--;
        }

        int num = std::stoi(str.substr(1));
        int normalized_dir = ((dir % 4) + 4) % 4;

        player.x += num * directions[normalized_dir].first;
        player.y += num * directions[normalized_dir].second;
    }

    int ans = std::abs(player.x) + std::abs(player.y);

    std::cout << ans << std::endl;
    return 0;
}



