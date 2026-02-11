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

    bool sorted = true;

    for (int i = 0; i < inputall - 1; ++i) {
        if (numbers[i] > numbers[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (sorted) {
        std::cout << "Да, отсортировано\n";
    } else {
        std::cout << "Нет, не отсортировано\n";
    }

    return 0;
}