#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int low = 0;
    int high = arr.size() - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2; // Избегаем переполнения

        if (arr[mid] == target) {
            return mid; // Элемент найден
        } else if (arr[mid] < target) {
            low = mid + 1; // Ищем в правой половине
        } else {
            high = mid - 1; // Ищем в левой половине
        }
    }

    return -1; // Элемент не найден
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 7;

    int result = binarySearch(arr, target);
    if (result != -1) {
        std::cout << "Элемент найден на индексе: " << result << std::endl;
    } else {
        std::cout << "Элемент не найден." << std::endl;
    }

    return 0;
}