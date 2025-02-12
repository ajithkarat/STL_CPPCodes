#include <iostream>
#include <set>

int main() {
    // Create a set of integers
    std::set<int> s = {3, 1, 4, 1, 5};

    // Add an element to the set
    s.insert(9);

    // Iterate over the set and print elements (sorted order)
    std::cout << "Set: ";
    for (int n : s) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
