/*
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::setw(15) << "Name"
              << std::setw(10) << "Age"
              << std::setw(15) << "Score" << std::endl;

    std::cout << std::setw(15) << "Alice"
              << std::setw(10) << 24
              << std::setw(15) << 92.5 << std::endl;

    std::cout << std::setw(15) << "Bob"
              << std::setw(10) << 30
              << std::setw(15) << 85.0 << std::endl;

    std::cout << std::setw(15) << "Charlie"
              << std::setw(10) << 27
              << std::setw(15) << 88.5 << std::endl;

    return 0;
}
*/
/*

#include <iostream>
#include <iomanip>

int main() {
    double value1 = 3.141, value2 = 2.71828, value3 = 1.4;

    std::cout << "Formatted decimals with setw:\n";
    std::cout << std::setw(10) << value1 << "\n";
    std::cout << std::setw(10) << value2 << "\n";
    std::cout << std::setw(10) << value3 << "\n";

    return 0;
}

*/



#include <iostream>
#include <iomanip>

int main() {
    int num = 42;

    // Setting fill character to '*' with a width of 8
    std::cout << "Padded with '*': " << std::setw(8) << std::setfill('*') << num << std::endl;

    // Resetting fill character back to space
    std::cout << std::setfill(' ') << "Normal padding: " << std::setw(8) << num << std::endl;

    return 0;
}








