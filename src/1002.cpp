#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

    double pi;
    double raio;
    double resultado;

    pi = 3.14159;

    cin >> raio;

    resultado = pi*pow(raio,2);
    
    cout << fixed << setprecision(4);
    cout << "A=" << resultado << endl;
}