#include <iostream>
using namespace std;

int* intercala(int *vet1, int tam1, int *vet2, int tam2) {
    int tamanhoResultado = tam1 + tam2;
    int *resultado = new int[tamanhoResultado]; // Aloca memória para o vetor resultado

    int indice1 = 0, indice2 = 0;

    for (int i = 0; i < tamanhoResultado; i++) {
        if (indice1 < tam1) {
            resultado[i] = vet1[indice1];
            indice1++;
        }
        if (indice2 < tam2) {
            resultado[i + 1] = vet2[indice2];
            indice2++;
            i++;
        }
    }

    return resultado;
}

int main() {
    int tam1 = 4, tam2 = 3;
    int vetor1[] = {1, 2, 3, 4};
    int vetor2[] = {5, 6, 7};
    int *resultado = intercala(vetor1, tam1, vetor2, tam2);

    cout << "Vetor intercalado: ";
    for (int i = 0; i < tam1 + tam2; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;

    // Libera a memória alocada
    delete[] resultado;

    return 0;
}
