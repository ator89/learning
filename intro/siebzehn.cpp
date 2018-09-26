#include <iostream>
#include "persona.h"

using namespace std;

int main(int argc, char *argv[]){

   Persona p;
   cout << "Una persona: " << p.ojos()<<endl;
   cout << p.brazos()<<endl;
   cout << p.cabeza() << endl;
   
   p.color_ojos = "lokokok";
   cout << p.color_ojos << endl;
   cout << p.color_pelo << endl;
   cout << p.altura(43.5) << endl;
   cout << p.peso(138.7) << endl;
   p.edad = 88;
   cout << p.edad << endl;
   
   
   system("pause");
   return 0;
}
