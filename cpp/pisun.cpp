#include <iostream>

int main() {
    int count;
    std::cout << "Введите количество чисел: ";
    std::cin >> count;

    int number;
    int count = 0;

    for (int i = 0; i < count; ++i) {
        std::cout << "Введите число: ";
        std::cin >> number;

        if ((number % 3 == 0 || number % 4 == 0 || number % 5 == 0) && (number % 7 != 0)) {
            count++;
        }
    }

    std::cout << "Количество чисел, кратных 3, 4, 5, но не кратных 7: " << count << std::endl;

}