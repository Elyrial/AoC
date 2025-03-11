#include <iostream>

int main() {
    std::string instructions;
    std::cin >> instructions;

    int ans = 0;
    for (int i = 0; i < instructions.length(); i++) {
        if (instructions[i] == '(') {
            ans++;
        } else if (instructions[i] == ')') {
            ans--;
        }
        if(ans == -1) {
            ans = i + 1;
            break;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}

