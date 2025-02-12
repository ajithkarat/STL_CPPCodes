#include <iostream>
#include <set>

int main() {
    // Create a multiset of integers
    std::multiset<int> ms = {1, 3, 3, 2, 1, 4};

    // Add a duplicate element
    ms.insert(3);

    // Iterate over the multiset and print elements (sorted order)
    std::cout << "Multiset: ";
    for (int n : ms) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
