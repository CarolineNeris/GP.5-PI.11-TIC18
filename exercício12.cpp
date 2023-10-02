/*Escreva uma função que receba duas strings A e B por parâmetro e retorne uma
terceira string C com os caracteres que aparecem tanto em A quanto em B. O
tamanho das string A e B pode ser diferente.
*/

#include <iostream>
#include <string>
using namespace std;

string C;
string carac_igual(const string& A, const string& B)
{
    for (char val_temp : A)
    {
        if(B.find(val_temp)!= string::npos)
        {
            C+= val_temp;
        }
    }
    return C;
}

int main() {
    string A = "hjuoem";
    string B = "hjujgy";

    // Chamando a função para encontrar os caracteres comuns
    string C = carac_igual(A, B);

    // Imprimindo os caracteres comuns
    cout << "Caracteres comuns em A e B: " << C << endl;

    return 0;
}