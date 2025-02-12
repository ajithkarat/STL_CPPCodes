#include <iostream>
#include <deque>

int main() {
    // Create a deque of integers
    std::deque<int> d = {1, 2, 3};

    // Add elements at both ends
    d.push_back(4);  // Add to the back
    d.push_front(0); // Add to the front

    // Iterate over the deque and print elements
    std::cout << "Deque: ";
    for (int n : d) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
