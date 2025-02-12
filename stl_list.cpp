#include <iostream>
#include <list>

int main() {
    // Create a list of integers
    std::list<int> l = {1, 2, 3};

    // Add an element to the front and back
    l.push_back(4);
    l.push_front(0);

    // Iterate over the list and print elements
    std::cout << "List: ";
    for (int n : l) {
        std::cout << n << " ";
    }
    std::cout << std::endl;

    return 0;
}
