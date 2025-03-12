#include <iostream>
#include <vector>

int main() {
    std::string str, ans;
    std::vector<std::string> list;

    while (std::cin >> str) {
        list.push_back(str);
    }

    for (int i = 0; i < list.size(); i++) {
        for (int j = i + 1; j < list.size(); j++) {
            int diff = 0;
            for (int h = 0; h < list[0].length(); h++) {
                if (list[i][h] != list[j][h]) diff++;
            }

            if (diff == 1) {
                for (int k = 0; k < list[0].length(); k++) {
                    if (list[i][k] == list[j][k]) ans += list[i][k];
                }
                std::cout << ans << std::endl;
                return 0;
            }
        }
    }
    return 0;
}
