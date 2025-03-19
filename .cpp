#include <iostream>

int main() {
    // Variables 
    int op;  // Change from char to int
    double num1, num2, result;

    std::cout << "********** CALCULATOR *********" << std::endl;

    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "5. Exit" << std::endl;
    
    std::cout << "****************************" << std::endl;

    std::cout << "Choose an option: ";
    std::cin >> op;

    
    if (op == 5) {
        std::cout << "Thank you for using my calculator!!!" << std::endl;
        return 0;
    }
    
    if (op < 1 || op > 4) {
        std::cout << "Invalid Selection. Please restart the program!" << std::endl;
        return 0;
    }

    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (op)
    {
    case 1:
        result = num1 + num2;
        std::cout << "The sum is: " << result << std::endl;
        break;
    case 2:
        result = num1 - num2;
        std::cout << "The difference is: " << result << std::endl;
        break;
    case 3:
        result = num1 * num2;
        std::cout << "The product is: " << result << std::endl;
        break;
    case 4:
        if (num2 == 0) {
            std::cout << "Error: Cannot Divide By 0" << std::endl;
        } else {
            result = num1 / num2;
            std::cout << "The quotient is: " << result << std::endl;
        }
        break;
    default:
        std::cout << "That was not a valid response." << std::endl;
    }
    

    
    return 0;
}
