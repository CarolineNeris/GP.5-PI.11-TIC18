#include <iostream>
using namespace std;

bool eh_primo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int conta_primos(int *vet, int qtde) {
    int contador = 0;

    for (int i = 0; i < qtde; ++i) {
        if (eh_primo(vet[i])) {
            contador++;
        }
    }

    return contador;
}

int main() {
    const int tamanho = 7;  // Defina o tamanho do vetor conforme necessário
    int vetor[tamanho] = {1, 2, 3, 4, 5, 6, 7};  // Exemplo de vetor

    cout << "Vetor: ";
    for (int i = 0; i < tamanho; ++i) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int primos = conta_primos(vetor, tamanho);

    cout << "Quantidade de números primos no vetor: " << primos << endl;

    return 0;
}
