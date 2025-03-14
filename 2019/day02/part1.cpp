#include <iostream>
#include <vector>

void runProgram(std::vector<int> &V) {
    for (int i = 0; i < V.size(); i += 4) {
        if (i + 3 >= V.size()) return;

        int opcode = V[i];
        if (opcode == 99) break;

        int idx1 = V[i + 1];
        int idx2 = V[i + 2];
        int idx3 = V[i + 3];

        if (idx1 >= V.size() || idx2 >= V.size() || idx3 >= V.size()) return;

        if (opcode == 1) {
            V[idx3] = V[idx1] + V[idx2];
        } else if (opcode == 2) {
            V[idx3] = V[idx1] * V[idx2];
        }
    }
}

int main() {
    int ans = 0;
    int a;
    std::vector<int> V;

    while (std::cin >> a) {
        V.push_back(a);
    }

    V[1] = 12;
    V[2] = 2;

    runProgram(V);

    ans = V[0];

    std::cout << ans << std::endl;
    return 0;
}

