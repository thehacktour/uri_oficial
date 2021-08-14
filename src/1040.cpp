#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <iostream>
using namespace std;

int main(){

    float A,B,C,D;
    float media;
    float exame_final;
    float nova_media;

    cin >> A >> B >> C >> D;

   media = (((A*2)+(B*3)+(C*4)+(D*1))/10);

   cout << fixed << setprecision(1);
   cout << "Media: " << media << endl;

   if (media > 7){
        cout << "Aluno aprovado." << endl;
   }else if (media <5){
        cout << "Aluno reprovado." << endl;
   }else if ((media>=5.0) || (media <= 6.9)){
        cout << "Aluno em exame." << endl;
        cin >> exame_final;
        cout << "Nota do exame: " << exame_final << endl;
        nova_media = (exame_final + media)/2;
        if (exame_final >= 5){
            cout << "Aluno aprovado." << endl;
            cout << "Media final: " << nova_media << endl;
        }else if (exame_final <= 4.9){
            cout << "Aluno reprovado." << endl;
            cout << "Media final: " << nova_media << endl;

       }
    }
 }