#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main(){

    int codigo, quantidade;
    double resultado;

    cin >> codigo >> quantidade;

    cout << fixed << setprecision(2);

    if (codigo == 1){
        resultado = (quantidade*4.00);
        cout << "Total: R$ " << resultado << endl;
    }else if(codigo == 2){
        resultado = (quantidade*4.50);
        cout << "Total: R$ " << resultado << endl;
    }else if(codigo == 3){
        resultado = (quantidade*5.00);
        cout << "Total: R$ " << resultado << endl;
    }else if(codigo == 4){
        resultado = (quantidade*2.00);
        cout << "Total: R$ " << resultado << endl;
    }else if(codigo == 5){
        resultado = (quantidade*1.50);
        cout << "Total: R$ " << resultado << endl;
    }
}