#include <iostream>
#include <vector>
using namespace std;

int insere_meio(vector<int> &vetor, int elemento) {
    int meio = vetor.size() / 2; // Encontra o índice do meio do vetor

    if (vetor.size() == vetor.capacity()) { //verifica se o vetor está cheio
        vetor.resize(vetor.size() + 1);  }
   
    for (int i = vetor.size() - 1; i > meio; i--) {     // Move os elementos à direita do meio para acomodar o novo elemento
        vetor[i] = vetor[i - 1]; }

    vetor[meio] = elemento; // Insere o elemento no meio
    return vetor.size();
}

int main() {
    vector<int> vetor = {1, 2, 3, 4, 5, 6};
    int elemento;

    cout << "Informe o elemento a ser inserido no meio do vetor: ";
    cin >> elemento;

    int novaQtde = insere_meio(vetor, elemento);        
    cout << "Novo vetor: " << endl;
    for (int i = 0; i < novaQtde ; i++) {
        cout << vetor[i] << " ";    }
    cout << endl;

    return 0;
}
