#include <iostream>
#include <locale>

int main() {
    setlocale(LC_ALL, "Russian");

    int input_count_number;
    std::cout << "Введите количество чисел: ";
    std::cin >> input_count_number;

    if (input_count_number <= 0) {
        std::cout << "Количество чисел должно быть больше нуля.\n";
        return 0;
    }

    int number;
    std::cin >> number;

    int minNumber = number;
    int maxNumber = number;

    for (int i = 1; i < input_count_number; ++i) {
        std::cin >> number;
        if (number < minNumber) {
            minNumber = number;
        }
        if (number > maxNumber) {
            maxNumber = number;
        }
    }

    int difference = maxNumber - minNumber;

    std::cout << "\nМаксимальное: " << maxNumber << "\n";
    std::cout << "Минимальное: " << minNumber << "\n";
    std::cout << "Разница между ними: " << difference << "\n";

    return 0;
}
