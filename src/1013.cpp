#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    int a;
    int b;
    int c;
    int maiorAB;

    for (int i=0; i<1; i++){
        scanf("%d %d %d", &a, &b, &c);
    }

   maiorAB = (a+b+abs(a-b))/2;

   if (maiorAB>c){
        cout << maiorAB <<" eh o maior" <<endl;

   }else{
        cout << c << " eh o maior" <<endl;
   }

}

