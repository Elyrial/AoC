#include <iostream>
#include <vector>

int main() {
    int ans = 0;

    std::vector<std::vector<std::string>> keys;

    std::string rows;
    while (true) {
        std::string row;
        std::vector<std::string> key;
        while (std::getline(std::cin, row)) {
            if (row.empty()) break;
            key.push_back(row);
        }
        if (key.empty()) break;
        keys.push_back(key);
    }

    for (int firstKey = 0; firstKey < keys.size(); firstKey++) {
        for (int secondKey = firstKey + 1; secondKey < keys.size(); secondKey++) {
            bool foundKey = true;
            for (int keyRow = 0; keyRow < keys[firstKey].size(); keyRow++) {
                for (int keyChar = 0; keyChar < keys[firstKey][keyRow].length(); keyChar++) {
                    if (keys[firstKey][keyRow][keyChar] ==  '#' && keys[secondKey][keyRow][keyChar] == '#') {
                        foundKey = false;
                        break;
                    }
                }
                if (!foundKey) break;
            }
            if (foundKey) ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}

