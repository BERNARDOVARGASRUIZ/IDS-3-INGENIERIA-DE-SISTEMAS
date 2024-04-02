/*
  Este código está protegido por derechos de autor (c) 2024 Bernardo Vargas Ruiz.
  Todos los derechos reservados.
*/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<int> generar_serie(int numeroEntrada) {
    vector<int> serie;
    serie.push_back(numeroEntrada);

    int i = 0;
    do {
        if (i == 0) {
            string inver = to_string(numeroEntrada);
            reverse(inver.begin(), inver.end());
            int inverso = stoi(inver);
            serie.push_back(inverso);
        } else {
            int siguiente = numeroEntrada + i;
            string siguiente_str = to_string(siguiente);
            serie.push_back(siguiente);

            string inverso_siguiente_str = siguiente_str;
            reverse(inverso_siguiente_str.begin(), inverso_siguiente_str.end());
            int inverso_siguiente = stoi(inverso_siguiente_str);
            serie.push_back(inverso_siguiente);
        }
        i++;
    } while (i <= 4);
    return serie;
}

int main() {
    int numeroUsuario;
    cout << "Ingrese un número: ";
    cin >> numeroUsuario;
    cout<<"======================================================================"<<endl;
    vector<int> serieGenerada = generar_serie(numeroUsuario);
    cout << "La serie generada es: ";
    int suma = 0;
    for (int i = 0; i < serieGenerada.size(); ++i) {
        cout << serieGenerada[i];
        if (i != serieGenerada.size() - 1) {
            cout << ", ";
        }
        suma += serieGenerada[i];
    }
    cout << endl;
    cout << "La suma de la serie es: " << suma << endl;
    return 0;
}
