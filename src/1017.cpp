#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main(){

    int tempo;
    int velocidade;
    double resultado1;
    double resultado2;
    double km;

    km = 12.0;

    cin >> tempo;
    cin >> velocidade;

    resultado1 = (tempo*velocidade);
    resultado2 = (resultado1/km);

    cout << fixed << setprecision(3);
    cout << resultado2 << endl;

}