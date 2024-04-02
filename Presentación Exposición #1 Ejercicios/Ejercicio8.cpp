#include <iostream>
#include <vector>

int main() {
  
    std::vector<int> sn = {251, 152, 252, 252, 253, 352, 254, 452, 255, 552};
    
    std::cout << "LA SERIE DE NUMEROS ES:" << std::endl;
    for (int n : sn) {
        std::cout << n << " ";
    }
    std::cout << std::endl;
    
  
    int s = 0;
    for (int n : sn) {
        s += n;
    }
    
    std::cout << "LA SUMA DE LOS NUMEROS ES:" << std::endl;
    std::cout << s << std::endl;

    return 0;
}
