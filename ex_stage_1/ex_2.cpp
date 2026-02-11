#include <iostream>
#include <vector>

int main() {

    std::cout << "Введите количество вводимых чисел: \n";

    int inputall{};
    if (!(std::cin >> inputall) || inputall < 1) {
        std::cout << "Ошибка ввода! Введите количество вводимых чисел. \n ";
        return 1;
    }

    std::cout << "Введите числа: \n";

    std::vector<int> numbers;
    numbers.reserve(inputall);

    int input{};
    for (int i = 0; i < inputall; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошшибка ввода. Вводите только числа. \n";
            return 1;
        }
        numbers.push_back(input);
    }

    for (int& x : numbers) {
        if ((x % 2) == 0) {
            x = 0;
        }
    }

    std::cout << "Итог: \n";
    for (int x : numbers) {
        std::cout << x << " ";
    }
    std::cout << "\n";

    return 0;
}