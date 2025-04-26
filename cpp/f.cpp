#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int size;
    std::cin>>size;
    std::vector<int> arr(size);
    std::vector<int> n_v;
    for (int i = 0; i < size; ++i) {
        arr[i] = std::rand() % (45 - (-31) + 1) + (-31);
        if(i%2!=0){n_v.emplace_back(i);}
    }
for(int i:n_v){
    std::cout<<i<<std::endl;
}
}