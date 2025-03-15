#include <iostream>
#include <map>
#include <set>

struct Position {
    int x = 0;
    int y = 0;
};

int main() {
    int ans;
    std::string directions;
    std::cin >> directions;

    std::map<char, std::pair<int, int>> directionMap = {
        {'v', {1, 0}},
        {'<', {0, -1}},
        {'^', {-1, 0}},
        {'>', {0, 1}}
    };

    std::set<std::pair<int, int>> positions;
    positions.insert({0, 0}); // Initial position
    
    Position santa;
    Position roboSanta;

    for (int i = 0; i < directions.length(); i++) {
        if (i % 2 == 0) {
            santa.x += directionMap[directions[i]].first;
            santa.y += directionMap[directions[i]].second;
            positions.insert({santa.x, santa.y});
        } else {
            roboSanta.x += directionMap[directions[i]].first;
            roboSanta.y += directionMap[directions[i]].second;
            positions.insert({roboSanta.x, roboSanta.y});
        }
    }

    ans = positions.size();

    std::cout << ans << std::endl;
    return 0;
}

