#include <iostream>
#include <vector>

int main() {
    int ans = 0;

    int a, b, c;
    std::vector<std::vector<int>> V;

    while (std::cin >> a >> b >> c) {
        V.push_back({a, b, c});
    }

    for (int col = 0; col < V[0].size(); col++) {
        for (int row = 0; row < V.size(); row += 3) {
            int side1 = V[row][col];
            int side2 = V[row + 1][col];
            int side3 = V[row + 2][col];

            if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}


