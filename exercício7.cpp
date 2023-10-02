#include <iostream>
using namespace std;

void multiplica_por_n(int *vet, int qtde, int n) {
    for (int i = 0; i < qtde; ++i) {
        vet[i] *= n;
    }
}

int main() {
    const int tamanho = 5;  // Defina o tamanho do vetor conforme necessário
    int vetor[tamanho] = {1, 2, 3, 4, 5};  // Exemplo de vetor

    cout << "Vetor original: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int multiplicador = 3;  // Defina o multiplicador conforme necessário

    multiplica_por_n(vetor, tamanho, multiplicador);

    cout << "Vetor multiplicado por " << multiplicador << ": ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}
