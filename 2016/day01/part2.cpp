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

    std::set<std::pair<int, int>> visited;
    visited.insert({player.x, player.y});

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

        for (int i = 0; i < num; i++) {
            player.x += directions[normalized_dir].first;
            player.y += directions[normalized_dir].second;

            if (visited.find({player.x, player.y}) != visited.end()) {
                int ans = std::abs(player.x) + std::abs(player.y);
                std::cout << ans << std::endl;
                return 0;
            }
            visited.insert({player.x, player.y});
        }
    }

    int ans = std::abs(player.x) + std::abs(player.y);

    std::cout << ans << std::endl;
    return 0;
}


