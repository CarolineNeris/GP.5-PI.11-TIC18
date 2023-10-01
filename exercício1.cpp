#include <iostream>
using namespace std;


void maxmin(int vetor[], int n, int &max, int &min) {
    max = min = vetor[0];                               
    for (int i = 0; i < n; i++) {                       
        if (vetor[i] > max) {                           
            max = vetor[i];                             
        }
        if (vetor[i] < min) {                           
            min = vetor[i];                            
        }
    }
}

int main() {                                            
    int max, min, n;
    cout << "Informe o tamanho do vetor: " << endl;
    cin >> n;
    int vetor[n];                                       

    cout << "Informe os valores do vetor:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vetor[i];                                
    }

    maxmin(vetor, n, max, min);                         

    cout << "Máximo: " << max << endl;
    cout << "Mínimo: " << min << endl;

    return 0;
}
