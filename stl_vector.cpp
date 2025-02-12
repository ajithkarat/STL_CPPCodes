#include <iostream>
#include <vector>

int main() {
    // Create a vector of integers
    std::vector<int> v = {1, 2, 3, 4, 5};

    // Add an element to the end
    v.push_back(6);

    // Iterate over the vector and print elements
    std::cout << "Vector: ";
    for (int n : v) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
