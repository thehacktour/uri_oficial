#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;


int main(){
    double x1;
    double y1;
    double x2;
    double y2;
    double distancia;

    for (int i=0; i<1; i++){
        scanf("%lf %lf", &x1,&y1);
        scanf("%lf %lf", &x2,&y2);
    }

    distancia = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    cout << fixed << setprecision(4);
    cout << distancia << endl;
}