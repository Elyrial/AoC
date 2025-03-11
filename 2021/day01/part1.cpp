#include <iostream>
#include <vector>

int main() {
    int ans = 0;
    int depth;
    std::vector<int> V;

    while (std::cin >> depth) {
        V.push_back(depth);
    }

    for (int i = 0; i < V.size() - 1; i++) {
        if (V[i] < V[i + 1]) {
            ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
