#include <iostream>
#include <map>

int main() {
    // Create a map of integers to strings
    std::map<int, std::string> m = {{1, "one"}, {2, "two"}, {3, "three"}};

    // Add a new key-value pair
    m[4] = "four";

    // Iterate over the map and print key-value pairs
    std::cout << "Map: ";
    for (const auto& p : m) {
        std::cout << p.first << " -> " << p.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
