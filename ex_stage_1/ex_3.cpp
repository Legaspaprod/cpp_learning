#include <iostream>
#include <vector>

int main() {

    std::cout << "Введите количество вводимых чисел. \n";

    int inputall{};
    if (!(std::cin >> inputall) || inputall < 1) {
        std::cout << "Ошибка ввода. Введите количество чисел. \n";
        return 1;
    }

    std::cout << "Введите числа. \n";

    std::vector<int> numbers;
    numbers.reserve(inputall);

    int input{};
    for (int i = 0; i < inputall; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошибка вводите только числа. \n";
            return 1;
        }
        numbers.push_back(input);
    }

    int max_value = numbers[0];
    int min_value = numbers[0];

    for (const int x : numbers) {
        if (x > max_value) {
            max_value = x;
        } else if (x < min_value) {
            min_value = x;
        }
    }

    std::cout << "Максимальный элемент: " << max_value << "  \n";
    std::cout << "Разница между максимальным и миниммальным: " << max_value - min_value << " \n";

    return 0;
}