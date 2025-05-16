#include <iostream>
using namespace std;

int main() {
    // Declaração de um array com tamanho fixo
    const int tamanho = 5;
    int numeros[tamanho];

    // Preenchendo o array com valores fornecidos pelo usuário
    cout << "Digite " << tamanho << " números:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << "Número " << i + 1 << ": ";
        cin >> numeros[i];
    }

    // Exibindo os valores armazenados no array
    cout << "\nOs números digitados foram:" << endl;
    for (int i = 0; i < tamanho; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}
