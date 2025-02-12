#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered set of integers
    std::unordered_set<int> us = {3, 1, 4, 1, 5};

    // Add an element to the unordered set
    us.insert(9);

    // Iterate over the unordered set and print elements
    std::cout << "Unordered Set: ";
    for (int n : us) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
