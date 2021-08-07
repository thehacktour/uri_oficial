#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    int x;
    int resultado;
    int foo [] =  {100,50,20,10,5,2,1};
    cin >> x;

    cout << x << endl;

    for (int i=0; i < 7; i++){

        resultado = x/foo[i];
        x = x % foo[i];

        cout << resultado<<" nota(s) de R$ "<<foo[i]<< ",00"<< endl;
    }

}