#include <iostream>
#include <vector>
#include <map>

struct Position {
    int x = 2;
    int y = 0;
};

int main() {
    std::string ans;
    std::string seq;
    std::vector<std::string> list;

    while (std::cin >> seq) {
        list.push_back(seq);
    }

    std::vector<std::string> keypad = {
        "##1##",
        "#234#",
        "56789",
        "#ABC#",
        "##D##"
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
            if (newX >= 0 && newX <= 4 && newY >= 0 && newY <= 4 && keypad[newX][newY] != '#') {
                pos.x += dirMap[ch].first;
                pos.y += dirMap[ch].second;
            }
        }
        ans += keypad[pos.x][pos.y];
    }

    std::cout << ans << std::endl;
    return 0;
}

