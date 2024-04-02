#include <iostream>
#include <vector>

int main() {
  
    vector<int> sn = {251, 152, 252, 252, 253, 352, 254, 452, 255, 552};
    
    cout << "LA SERIE DE NUMEROS ES:" <<endl;
    for (int n : sn) {
        std::cout << n << " ";
    }
    cout <<endl;
    
  
    int s = 0;
    for (int n : sn) {
        s += n;
    }
    
    cout << "LA SUMA DE LOS NUMEROS ES:" <<endl;
    cout << s <<endl;

    return 0;
}
