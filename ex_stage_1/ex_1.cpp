#include <iostream>
#include <vector>

int main() {

    std::cout << "Введите количество всего чисел: \n";
    int numberall{};
    if (!(std::cin >> numberall) || numberall < 1) {
            std::cout << "Ошибка ввода! Вводите только числа.\n";
            return 1;
        }

    std::cout << "Введите числа: \n";
    std::vector<int> numbers;
    numbers.reserve(numberall);
    
    int input{};
    for (int i = 0; i < numberall; ++i) {
        if (!(std::cin >> input)) {
            std::cout << "Ошибка ввода! Вводите только числа\n";
            return 1;
        }
        numbers.push_back(input);
    }

    int sum_plus{};
    int sum_minus{};
    int sum{};

    for (int x : numbers) {
        if (x > 0) {
            sum_plus++;
        } else if (x < 0) {
            sum_minus++;
        }
        sum += x;
    }

    std::cout << "Сумма всех числе равно: " << sum << "\n";
    std::cout << "Количество положительных чисел равно: " << sum_plus << "\n";
    std::cout << "Количество отрицательных чисел равно: " << sum_minus << "\n";

    return 0;
}