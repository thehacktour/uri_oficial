#include <stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int numeroFuncionario;
    float horasTrabalhadas;
    float valorHora;
    float salario;

    cin >> numeroFuncionario;
    cin >> valorHora;
    cin >> horasTrabalhadas;

    salario = (horasTrabalhadas*valorHora);

    cout << fixed << setprecision(2);
    cout << "NUMBER = " << numeroFuncionario << endl;
    cout << "SALARY = U$ " << salario << endl;

}