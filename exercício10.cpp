#include <iostream>
#include <vector>
using namespace std;

// Função para encontrar as posições da letra na string
int* encontra_letra(const string& str, char letra, int& tamanho) {
    vector<int> posicoes;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == letra) {
            posicoes.push_back(i);
        }
    }

    // Alocando dinamicamente um vetor de inteiros para armazenar as posições
    int* vetorPosicoes = new int[posicoes.size()];

    // Copiando as posições do vetor de vector para o vetor dinâmico
    for (int i = 0; i < posicoes.size(); ++i) {
        vetorPosicoes[i] = posicoes[i];
    }

    // Atribuindo o tamanho do vetor através do ponteiro
    tamanho = posicoes.size();

    // Retornando o vetor dinâmico
    return vetorPosicoes;
}

int main() {
    string minhaString;
    char minhaLetra;

    // Solicitando a string e a letra ao usuário
    cout << "Informe uma string: ";
    cin >> minhaString;

    cout << "Informe uma letra: ";
    cin >> minhaLetra;

    int tamanhoVetor;

    // Chamando a função para encontrar as posições da letra na string
    int* vetorPosicoes = encontra_letra(minhaString, minhaLetra, tamanhoVetor);

    // Imprimindo as posições encontradas
    cout << "Posições da letra '" << minhaLetra << "': ";
    for (int i = 0; i < tamanhoVetor; ++i) {
        cout << vetorPosicoes[i] << " ";
    }
    cout << endl;

    // Liberando a memória alocada dinamicamente para o vetor
    delete[] vetorPosicoes;

    return 0;
}
