#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int size;
    std::cin>>size;
    std::vector<int> arr(size);
    int product = 1;

    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % (26 - (-19) + 1) + (-19);
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    for (int i = 1; i < size; i += 2) {
        product *= arr[i];
    }

    std::cout<<product<<std::endl;

}