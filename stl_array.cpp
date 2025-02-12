#include <iostream>
#include <array>

int main() {
    // Create an array of integers with fixed size
    std::array<int, 5> arr = {1, 2, 3, 4, 5};

    // Iterate over the array and print elements
    std::cout << "Array: ";
    for (int n : arr) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
