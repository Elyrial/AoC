#include <iostream>
#include <vector>

const int TARGET = 19690720;

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
    std::vector<int> V, originalV;

    while (std::cin >> a) {
        V.push_back(a);
    }

    originalV = V;

    for (int noun = 0; noun <= 99; noun++) {
        for (int verb = 0; verb <= 99; verb++) {
            V = originalV;

            V[1] = noun;
            V[2] = verb;

            runProgram(V);

            if (V[0] == TARGET) {
                ans = 100 * noun + verb;
                std::cout << ans << std::endl;
                return 0;
            }
        }
    }
    return 0;
}


