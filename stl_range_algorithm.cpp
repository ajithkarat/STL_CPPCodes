#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <ranges>

int main() {
    // Step 1: Initialize a vector container
    std::vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // Step 2: Use ranges to filter even numbers and then square them
    auto squared_even_numbers = numbers 
        | std::views::filter([](int n) { return n % 2 == 0; })  // Filter even numbers
        | std::views::transform([](int n) { return n * n; });   // Square the numbers

    // Step 3: Print the squared even numbers
    std::cout << "Squared even numbers: ";
    for (int n : squared_even_numbers) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    // Step 4: Use a standard algorithm to compute the sum
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum of numbers: " << sum << "\n";

    // Step 5: Use ranges and the new C++20 concept "ranges::sort" to sort the numbers
    std::ranges::sort(numbers);

    // Step 6: Print the sorted vector
    std::cout << "Sorted numbers: ";
    for (int n : numbers) {
        std::cout << n << " ";
    }
    std::cout << "\n";

    return 0;
    
}
