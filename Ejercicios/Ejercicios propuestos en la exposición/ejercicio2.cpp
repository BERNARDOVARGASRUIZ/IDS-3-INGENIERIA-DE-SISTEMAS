#include <iostream>
void fibonacci(int n) {
    int a = 0, b = 1, c;
    std::cout << n << ":" << std::endl;
    std::cout << a << " " << b << " ";
    for (int i = 2; i < n; ++i) {
        c = a + b;
        std::cout << c << " ";
        a = b;
        b = c;
    }
}

int main() {
    int n;
    std::cout << "Ingrese el número a calcular : ";
    std::cin >> n;
    fibonacci(n);
    return 0;
}
