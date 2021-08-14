#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    float A,B,C;
    float resultado;

    cin >> A >> B >> C;

    cout << fixed << setprecision(1);

    if ((A+B>C) && (B+C>A) && (A+C>B)){
        resultado = (A+B+C);
        cout << "Perimetro = " << resultado << endl;
    }else {
        resultado = (((A+B)*C)/2);
        cout << "Area = " << resultado << endl;
    }

}