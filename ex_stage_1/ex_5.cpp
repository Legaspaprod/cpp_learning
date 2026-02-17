#include <iostream>
#include <vector>

int main() {

    std::cout << "Сколько чисел хотите ввести? \n";
    int inputall{}; 
    if (!(std::cin >> inputall) || inputall < 2) {
        std::cout << "Ошибка, введите одно число боольше 2. \n";
        return 1;
    }

    std::cout << "Введите " << inputall << " чисел.\n";

    std::vector<int> numbers;
    numbers.reserve(inputall);

    int input{};
    for (int i = 0; i < inputall; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошибка. Вводите только числа. \n";
            return 1;
        }
        numbers.push_back(input);
    }

    int max1 = numbers[0];
    int max2 = numbers[1];

    if (max2 > max1) {
        int temp = max1;
        max1 = max2;
        max2 = temp;
    }

    for (int i = 2; i < numbers.size(); ++i) {
        int x = numbers[i];

        if (x >= max1) {
            max2 = max1;
            max1 = x;
        }
        else if (x > max2) {
            max2 = x;
        }
    }

    std::cout << "Второе по величине число: " << max2 << "\n";

    return 0;
    
}