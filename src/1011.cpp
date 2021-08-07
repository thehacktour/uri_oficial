#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    double raio;
    double resultado;

    cin >> raio;

    resultado = (4.0/3) * 3.14159 * pow(raio,3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << resultado << endl;

}