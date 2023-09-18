#include <iostream>
using namespace std;

void calcula(int &X, int &Y) {
    int soma = X + Y;
    int subtracao = X - Y;
    X = soma;
    Y = subtracao;
}

int main() {
    int x, y;

    cout << "Informe dois números inteiros: ";
    cin >> x >> y;

    calcula(x, y);

    cout << "A soma dos números é: " << x << endl;
    cout << "A subtração dos números é: " << y << endl;

    return 0;
}
