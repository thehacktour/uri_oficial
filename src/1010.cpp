#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int codigo;
    int numero;
    float valor;
    float sum;

    sum = 0;

    for (int i = 0; i < 2; i++){

        scanf("%d %d %f", &codigo, &numero, &valor);

        sum += numero*valor;

    }

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << sum << endl;

}