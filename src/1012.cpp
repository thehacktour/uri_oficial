#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    double A;
    double B;
    double C;
    double pi;

    double triangulo;
    double circulo;
    double trapezio;
    double quadrado;
    double retangulo;

    pi = 3.14159;

    for (int i=0; i<1;i++){
        scanf("%lf %lf %lf", &A, &B, &C);
    }

    triangulo = ((A*C)/2);
    circulo = (pi*pow(C,2));
    trapezio = (((A+B)/2)*C);
    quadrado = (pow(B,2));
    retangulo = (A*B);

    cout << fixed << setprecision(3);

    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;

}