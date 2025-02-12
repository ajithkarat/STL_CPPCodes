#include <iostream>
#include <map>

int main() {
    // Create a multimap of integers to strings
    std::multimap<int, std::string> mm = {{1, "one"}, {2, "two"}, {1, "uno"}};

    // Add a new key-value pair
    mm.insert({2, "dos"});

    // Iterate over the multimap and print key-value pairs
    std::cout << "Multimap: ";
    for (const auto& p : mm) {
        std::cout << p.first << " -> " << p.second << " ";
    }
    std::cout << std::endl;

    return 0;
}
