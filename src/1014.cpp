#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    int distancia;
    float combustivel;
    float resultado;

    cin >> distancia;
    cin >> combustivel;

    resultado = (distancia/combustivel);

    cout << fixed << setprecision(3);
    cout << resultado << " km/l" << endl;

}