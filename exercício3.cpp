#include <iostream>
using namespace std;

void ordenarCrescente(float &a, float &b, float &c, float &d) {
    float temp; // Variável temporária

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (a > d) {
        temp = a;
        a = d;
        d = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (b > d) {
        temp = b;
        b = d;
        d = temp;
    }
    if (c > d) {
        temp = c;
        c = d;
        d = temp;
    }
}

int main() {
    float num1, num2, num3, num4;

    cout << "Informe quatro números: " << endl;
    cin >> num1 >> num2 >> num3 >> num4;

    ordenarCrescente(num1, num2, num3, num4);

    cout << "Números ordenados em ordem crescente: " << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    return 0;
}
