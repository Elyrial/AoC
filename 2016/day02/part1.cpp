#include <iostream>
#include <vector>
#include <map>

struct Position {
    int x = 1;
    int y = 1;
};

int main() {
    std::string ans;
    std::string seq;
    std::vector<std::string> list;

    while (std::cin >> seq) {
        list.push_back(seq);
    }

    std::vector<std::vector<int>> keypad = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    std::map<char, std::pair<int, int>> dirMap = {
        {'U', {-1, 0}},
        {'R', {0, 1}},
        {'D', {1, 0}},
        {'L', {0, -1}}
    };
    
    Position pos;

    for (std::string s : list) {
        for (char ch : s) {
            int newX = pos.x + dirMap[ch].first;
            int newY = pos.y + dirMap[ch].second;

            if (newX >= 0 && newX<= 2 && newY >= 0 && newY <= 2) {
                pos.x += dirMap[ch].first;
                pos.y += dirMap[ch].second;
            }
        }
        ans += std::to_string(keypad[pos.x][pos.y]);
    }

    std::cout << ans << std::endl;
    return 0;

}
