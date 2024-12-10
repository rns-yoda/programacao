#include <iostream>
using namespace std;

//Calcular a tabuada
int main() {
    int numero;

    // Solicita ao usuário que digite o número
    cout << "Digite um numero para calcular a tabuada: ";
    cin >> numero;

    // Calcula e exibe a tabuada do número
    cout << "\n Tabuada de " << numero << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    return 0;
}
