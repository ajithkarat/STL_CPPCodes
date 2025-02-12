#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered map of integers to strings
    std::unordered_map<int, std::string> um = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Add a new key-value pair
    um[4] = "four";

    // Iterate over the unordered map and print key-value pairs
    std::cout << "Unordered Map: ";
    for (const auto& p : um) {
        std::cout << p.first << " -> " << p.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
