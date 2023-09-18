#include <iostream>
using namespace std;


void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    // Verifica se o vetor está vazio
    if (n == 0) {
        cerr << "O vetor está vazio." << endl;
        return;
    }

    // Inicializa maximo e minimo com o primeiro elemento do vetor
    maximo = minimo = vetor[0];

    // Percorre o vetor para encontrar o máximo e o mínimo
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo) {
            maximo = vetor[i];
        }
        if (vetor[i] < minimo) {
            minimo = vetor[i];
        }
    }
}

int main() {
    int n;

    cout << "Digite o tamanho do vetor: ";
    cin >> n;

    if (n <= 0) {
        cerr << "Tamanho do vetor inválido." << endl;
        return 1;
    }

    int vetor[n];
    int maximo, minimo;

    cout << "Digite os elementos do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Elemento " << i + 1 << ": ";
        cin >> vetor[i];
    }

    maxmin(vetor, n, maximo, minimo);

    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}
