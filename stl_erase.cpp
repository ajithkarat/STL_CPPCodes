#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5, 6};

    // Erase elements equal to 3
    std::erase(vec, 3);

    // Erase elements greater than 4
    std::erase_if(vec, [](int x) { return x > 4; });

    // Print the modified vector
    for (int x : vec) {
        std::cout << x << " ";
    }

    return 0;
}
