#include <iostream>
#include <vector>

void printVector() {
    std::vector<char> vec = {1, 2, 3};
    std::cout << sizeof(vec) << std::endl ;


    std::cout << "Vector contents: ";
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;

    // Add more elements to the vector
    vec.push_back(4);
    vec.push_back(5);

    // Print the updated vector elements
    std::cout << "Updated vector contents: ";
    for (int value : vec) {
        std::cout << value << " ";
    }
    std::cout << std::endl;
}

int main() {
    // Print numbers from 0 to 4
    for (int i = 0; i < 5; ++i) {
        std::cout << i << "\n";
    }

    // Print a string message
    std::cout << "ariel astnagelov" << std::endl;

    // Call the function to demonstrate vector usage
    printVector();

    return 0;
}