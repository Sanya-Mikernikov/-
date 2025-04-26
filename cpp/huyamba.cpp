#include <iostream>

int F(int n, int m) {
    if (n == 1) return 2;
    if (n == 2) return 3;
    return F(n - 1, m) * n + F(n - 2, m) + m;
}

int main() {
    int m,n;
    std::cin>>m>>n;
    std::cout << F(n,m) << std::endl;
}