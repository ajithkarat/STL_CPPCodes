#include <iostream>
#include <unordered_map>

int main() {
    // Create an unordered multimap of integers to strings
    std::unordered_multimap<int, std::string> umm = {{1, "one"}, {2, "two"}, {1, "uno"}};

    // Add a new key-value pair
    umm.insert({2, "dos"});

    // Iterate over the unordered multimap and print key-value pairs
    std::cout << "Unordered Multimap: ";
    for (const auto& p : umm) {
        std::cout << p.first << " -> " << p.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
