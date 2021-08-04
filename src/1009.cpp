#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    string nomeVendedor;
    double salarioFixo;
    double totalVendas;
    double comissao;
    double salarioTotal;

    comissao = 0.15;

    cin >> nomeVendedor;
    cin >> salarioFixo;
    cin >> totalVendas;

    salarioTotal = (salarioFixo + (totalVendas*comissao));

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salarioTotal << endl;

}