#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered multiset of integers
    std::unordered_multiset<int> ums = {1, 3, 3, 2, 1, 4};

    // Add a duplicate element
    ums.insert(3);

    // Iterate over the unordered multiset and print elements
    std::cout << "Unordered Multiset: ";
    for (int n : ums) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
