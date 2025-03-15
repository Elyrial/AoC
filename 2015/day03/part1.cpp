#include <iostream>
#include <map>
#include <set>

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

    int x = 0;
    int y = 0;
    
    for(const char ch : directions) {
        x += directionMap[ch].first;
        y += directionMap[ch].second;
        positions.insert({x, y});
    }

    ans = positions.size();

    std::cout << ans << std::endl;
    return 0;
}
