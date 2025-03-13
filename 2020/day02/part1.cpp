#include <iostream>
#include <map>

int main() {
    int ans = 0;
    int a, b;

    while (scanf("%d-%d ", &a, &b) == 2) {
        char letter;
        std::string password;
        scanf("%c: ", &letter);
        
        std::cin >> password;
        std::map<char, int> list;

        for (char ch : password) {
            list[ch]++;
        }

        if (list[letter] >= a && list[letter] <= b) {
            ans++;
        }
    }

    std::cout << ans << std::endl;
    return 0;
}
