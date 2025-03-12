#include <iostream>
#include <unordered_map>

int main() {
    int ans;

    std::string str;
    int twos = 0, threes = 0;

    while (std::cin >> str) {
        std::unordered_map<char, int> iterator;        

        for (char ch : str) {
            iterator[ch]++;
        }
        
        bool hasTwo = false, hasThree = false;
        for (const auto &[_, count] : iterator) {
            if (count == 2) hasTwo = true;
            if (count == 3) hasThree = true;
            if (hasTwo && hasThree) break;
        }

        if (hasTwo) twos++;
        if (hasThree) threes++;
    }

    ans = twos * threes;
    
    std::cout << ans << std::endl;
    return 0;
}
