#include <iostream>
#include <ctime>

using namespace std;

void maxmin(int vetor[], int n, int &maximo, int &minimo) {
    maximo = minimo = vetor[0];
    for (int i = 1; i < n; i++) {
        if (vetor[i] > maximo)
            maximo = vetor[i];
        if (vetor[i] < minimo)
            minimo = vetor[i];
    }
}

int main() {
    int tamanhoVetor = 10;
    int maximo;
    int minimo;
    int vetorTeste[tamanhoVetor] = {0};

    srand(time(nullptr));

    for (int i = 0; i < tamanhoVetor; i++) {
        vetorTeste[i] = rand() % 43;
    }

    maxmin(vetorTeste, tamanhoVetor, maximo, minimo);

    cout << "Vetor:" << endl;
    for (int i = 0; i < tamanhoVetor; i++) {
        cout << vetorTeste[i] << " ";
    }
    cout << endl;

    cout << "Máximo: " << maximo << endl;
    cout << "Mínimo: " << minimo << endl;

    return 0;
}
