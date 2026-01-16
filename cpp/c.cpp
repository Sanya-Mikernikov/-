#include <iostream>

int main() {
    int n;
    std::cout << "Введите число n: ";
    std::cin >> n;

    for (int i = 1; i * i <= n; i++) {
        std::cout << i * i << " ";
    }
    std::cout << std::endl;

}