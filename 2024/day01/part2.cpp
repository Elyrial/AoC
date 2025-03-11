#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int l, r;
    std::vector<int> v1, v2;

    while(std::cin >> l >> r) {
        v1.push_back(l);
        v2.push_back(r);
    }

    int vecSize = v1.size();
    int ans = 0;

    for(int i = 0; i < vecSize; i++) {
        ans += v1[i] * std::count(v2.begin(), v2.end(), v1[i]);
    }

    std::cout << ans << std::endl;
    return 0;
}

