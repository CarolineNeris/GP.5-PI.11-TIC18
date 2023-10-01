#include <iostream>
using namespace std;

float calc_serie(int N) {
    if (N <= 0) {
        cerr << "O valor de N deve ser maior que zero." << endl;
        return 0.0;
    }

    float resultado = 0.0;
    for (int i = 1; i <= N; ++i) {
        resultado += 1.0 / i;
    }

    return resultado;
}

int main() {
    int N;

    cout << "Informe o valor de N: ";
    cin >> N;

    float resultado = calc_serie(N);

    cout << "O valor da série para N = " << N << " é: " << resultado << endl;

    return 0;
}
