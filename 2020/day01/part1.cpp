#include <iostream>
#include <vector>

int main() {
    int input, ans;
    std::vector<int> V;

    while (std::cin >> input) {
        V.push_back(input);
    }

    for (int i = 0; i < V.size(); i++) {
        for (int j = 0; j < V.size(); j++) {
            if (V[i] + V[j] == 2020) {
                ans = V[i] * V[j];
                std::cout << ans << std::endl;
                return 0;
            }
        }
    }
    return 0;
}


