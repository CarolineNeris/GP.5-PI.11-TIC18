#include <iostream>
using namespace std;


void maxmin(int vetor[], int n, int &max, int &min) {
    max = min = vetor[0];                               // Inicialize max e min com o primeiro elemento do vetor
    for (int i = 0; i < n; i++) {                       // Use "int i" para declarar a variável e a condição correta "i < n"
        if (vetor[i] > max) {                           // Corrija o uso do operador de comparação
            max = vetor[i];                             // Atualize o valor máximo
        }
        if (vetor[i] < min) {                           // Corrija o uso do operador de comparação
            min = vetor[i];                             // Atualize o valor mínimo
        }
    }
}

int main() {                                            // Deve ser "main" em vez de "mais"
    int max, min, n;
    cout << "Informe o tamanho do vetor: " << endl;
    cin >> n;
    int vetor[n];                                       // Declare o vetor com o tamanho informado pelo usuário

    cout << "Informe os valores do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];                                // Preencha o vetor com valores informados pelo usuário
    }

    maxmin(vetor, n, max, min);                         // Passe o vetor como argumento

    cout << "Máximo: " << max << endl;
    cout << "Mínimo: " << min << endl;

    return 0;
}
